import requests
import json
import re
from bs4 import BeautifulSoup
import time
requests.packages.urllib3.disable_warnings()
class_id="1145282C-26D3-420F-9EB3-9DE6C358B500"
teacher_cookie="TOKEN=SESSION_local_163F3897FA1C47B99728EFFC0815E59C"
student_cookie='TOKEN=SESSION_local_5C0C20C2870E4F2D9EC85FDCB0CD14D2'
ActivityID_list=[]
std_taskid_list=[]
std_task_id_dict={}
jsondata={}
ActivityIDs_url="https://10.21.48.240/Translayer/Teaching.Class/api/Activity/"+class_id
tasks_datail_url="https://10.21.48.240/Translayer/Teaching.Task/api/TeacherTaskDetail/"
teacher_tasks_ids_url = 'https://10.21.48.240/Translayer/Teaching.Class/api/TeacherTask/'+class_id
student_taskid_url='https://10.21.48.240/Translayer/Teaching.Class/api/StudentTask/'+class_id
preview_url="https://10.21.48.240/Translayer/Bank.Presentation/Load/"
ActivityIDs_json=requests.get(ActivityIDs_url, headers={'Cookie':teacher_cookie},verify=False).text
ActivityIDs_json=json.loads(ActivityIDs_json)
for examlist in ActivityIDs_json:
    examlist_id=examlist["ID"]
    ActivityID_list.append(examlist_id)
#print(ActivityID_list)
std_taskid_json = requests.post(student_taskid_url,data={"ActivityIDs":ActivityID_list,"IncludeStates":["PROGRESSING","STOPPED","UNSTART","INVALID"]}
, headers={'Cookie':student_cookie},verify=False).text
#print(std_taskid_json)
std_taskid_json = json.loads(std_taskid_json)
for f in range(10):
    std_taskid_list=std_taskid_json[f]["Tasks"]
    #print(std_taskid_list)
    for n in std_taskid_list:    
        std_taskid=n["ID"]
        std_exam_name=n["DisplayName"]
        #print(std_exam_name)
        std_task_id_dict[std_exam_name]=std_taskid
#print(std_task_id_dict["CET3综合训练5"])
id_data = requests.post(teacher_tasks_ids_url,data={"ActivityIDs":ActivityID_list,"IncludeStates":["PROGRESSING","STOPPED","UNSTART","INVALID"]}
, headers={'Cookie':teacher_cookie},verify=False).text
id_data = json.loads(id_data)
for f in range(10):
    tasks_list=id_data[f]["Tasks"]
    #print(tasks_list)
    for n in tasks_list:    
        teacher_taskid=n["ID"]
        exam_name=n["DisplayName"]
        BehaviorID_list = requests.get(tasks_datail_url+teacher_taskid, headers={'Cookie':teacher_cookie},verify=False).text
        BehaviorID_list = json.loads(BehaviorID_list)
        BehaviorID=BehaviorID_list["BehaviorID"]
        preview_data = requests.get(preview_url+BehaviorID+"/preview", headers={'Cookie':teacher_cookie},verify=False).text
        soup = BeautifulSoup(preview_data,'html.parser')
        for answer_id in soup.findAll("lcw-item-view"):
            num_text=0
            put_id=answer_id.get("id")
            put_id=put_id.replace('\\\"',"")
            put_id=put_id+"*ITEMREPLY*"
            #print(put_id)
            for answer_text in answer_id.find_all("lcw-answer"):
                #print(answer_text)
                answer_text=str(answer_text)
                answer_text=answer_text.replace('<lcw-answer>','')
                answer_text=answer_text.replace('</lcw-answer>','')
                put_id_bak=put_id
                put_id=put_id+str(num_text)
                num_text=1+num_text
                #print(put_id)
                jsondata[put_id]='{\"inputData\":\"'+answer_text+'\",\"localResult\":null}'
                put_id=put_id_bak
        #数据拿完了准备提交json_answer
        task_id=std_task_id_dict[exam_name]
        BHS_url='https://10.21.48.240/Translayer/Teaching.Task/api/StudentTaskResult/'+task_id
        BHS_ID = requests.get(BHS_url, headers={'Cookie':student_cookie},verify=False).text
        BHS_ID = json.loads(BHS_ID)
        BHS_ID=BHS_ID["BehaviorID"]
        #print(BHS_ID)
        put_url="https://10.21.48.240/Translayer/Behavior.Activity/api/BehaviorTimeRecordIncrementData/"+BHS_ID
        print("正在准备上传"+exam_name+"的答案")
        time.sleep(1)
        json_answer=json.dumps(jsondata)
        r = requests.put(put_url,data=json_answer, 
        headers={'Cookie':student_cookie,"Accept":"application/json, text/plain, */*","Content-Type":"application/json;charset=UTF-8","Referer":"https://10.21.48.240/Views/Teaching/Task/student-homework-answer.html?id=1145282C-26D3-420F-9EB3-9DE6C358B500&taskType=EXERCISEHOMEWORK&studentTaskId=787EA199-8831-48E7-8EC4-73E4868B9042"},verify=False)
        #print(r.text)
        if(r.status_code==200):
            print("上传答案成功")
        time.sleep(1200)
        sbmit_url="https://10.21.48.240/Translayer/Teaching.Task/api/StudentTask/"+task_id
        z = requests.put(sbmit_url,data="", 
        headers={'Cookie':student_cookie,"Accept":"application/json, text/plain, */*","Content-Type":"application/json;charset=UTF-8"},verify=False)
        if z.status_code==204:
            print("提交试卷成功")
        #print(json_answer)
        jsondata={}