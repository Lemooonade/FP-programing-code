import re
from bs4 import BeautifulSoup
import requests
import json
answer=[]
jsondata={}
url='https://10.21.48.240/Translayer/Behavior.Activity/api/BehaviorTimeRecordIncrementData/BHS_C5FBF2CBEBC149C68C0421B7C135A8DC'
cookie='TOKEN=SESSION_local_8A7674E823BB4ACBB96B2135F4A05A92'
with open("preview",'r',encoding='utf-8')as f1,open("eng答案.txt","a",encoding="utf-8") as f2:
    soup = BeautifulSoup(f1.read(),'html.parser')
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
            answer.append(answer_text)
            put_id_bak=put_id
            put_id=put_id+str(num_text)
            num_text=1+num_text
            #print(put_id)
            jsondata[put_id]='{\"inputData\":\"'+answer_text+'\",\"localResult\":null}'
            put_id=put_id_bak
        answer=[]
    json1=json.dumps(jsondata)
    r = requests.put(url,data=json1, 
    headers={'Cookie':cookie,"Accept":"application/json, text/plain, */*","Content-Type":"application/json;charset=UTF-8","Referer":"https://10.21.48.240/Views/Teaching/Task/student-homework-answer.html?id=1145282C-26D3-420F-9EB3-9DE6C358B500&taskType=EXERCISEHOMEWORK&studentTaskId=787EA199-8831-48E7-8EC4-73E4868B9042"},verify=False)
    print(r.text)
    #print(json1)