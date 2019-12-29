import requests
import json
import re
class_id="6DAF614C-1843-43A8-B9C3-CEFC38ACD452"
ActivityID_list=[]
ActivityIDs_url="https://10.21.48.240/Translayer/Teaching.Class/api/Activity/"+class_id
tasks_datail_url="https://10.21.48.240/Translayer/Teaching.Task/api/TeacherTaskDetail/"
tasks_ids_url = 'https://10.21.48.240/Translayer/Teaching.Class/api/TeacherTask/'+class_id
preview_url="https://10.21.48.240/Translayer/Bank.Presentation/Load/"
ActivityIDs_json=requests.get(ActivityIDs_url, headers={'Cookie':"TOKEN=SESSION_local_2F6E719760FF4B60A7A158501EBE6E75"},verify=False).text
ActivityIDs_json=json.loads(ActivityIDs_json)
for examlist in ActivityIDs_json:
    examlist_id=examlist["ID"]
    ActivityID_list.append(examlist_id)
#print(ActivityID_list)
id_data = requests.post(tasks_ids_url,data={"ActivityIDs":ActivityID_list,"IncludeStates":["PROGRESSING","STOPPED","UNSTART","INVALID"]}
, headers={'Cookie':"TOKEN=SESSION_local_2F6E719760FF4B60A7A158501EBE6E75"},verify=False).text
id_data = json.loads(id_data)
for f in range(9):
    tasks_list=id_data[f]["Tasks"]
    #print(tasks_list)

    for n in tasks_list:    
          id=n["ID"]
          exam_name=n["DisplayName"]
          BehaviorID_list = requests.get(tasks_datail_url+id, headers={'Cookie':"TOKEN=SESSION_local_2F6E719760FF4B60A7A158501EBE6E75"},verify=False).text
          BehaviorID_list = json.loads(BehaviorID_list)
          BehaviorID=BehaviorID_list["BehaviorID"]
          preview_data = requests.get(preview_url+BehaviorID+"/preview", headers={'Cookie':"TOKEN=SESSION_local_2F6E719760FF4B60A7A158501EBE6E75"},verify=False).text
          preview_data = json.loads(preview_data)
          content=preview_data["content"]
          count=content.count('<lcw-scoring-grade description="',0,len(content))
          search_tmp_answer = re.findall('<lcw-scoring-grade description=".*?(?=")', content)
          with open(exam_name+".txt",'a',encoding="utf-8")as f:
              j=1
              for i in range(count):
                    answer=search_tmp_answer[i].replace('<lcw-scoring-grade description="','')
                    print(answer,end = " ")
                    if(j!=5):
                        f.write(answer+" ")
                        j=j+1
                    else:
                        f.write("\n")
                        j=1
              print("\n")