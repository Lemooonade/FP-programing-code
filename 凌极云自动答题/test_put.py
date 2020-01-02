import requests
import json
jsondata={}
url='https://10.21.48.240/Translayer/Behavior.Activity/api/BehaviorTimeRecordIncrementData/BHS_622E746F573E4E74BEA383AC1AC63031'
cookie='TOKEN=SESSION_local_E1093D1729F04066BFFC56EF6C72C97B'
r = requests.put(url,data='{"7d3f3112512a49c99361813311186907*ITEMREPLY*0":"{\"inputData\":\"1\",\"localResult\":null}"}', 
headers={'Cookie':cookie,"Accept":"application/json, text/plain, */*","Content-Type":"application/json;charset=UTF-8","Referer":"https://10.21.48.240/Views/Teaching/Task/student-homework-answer.html?id=1145282C-26D3-420F-9EB3-9DE6C358B500&taskType=EXERCISEHOMEWORK&studentTaskId=787EA199-8831-48E7-8EC4-73E4868B9042",
"Origin":"https://10.21.48.240","Host":"10.21.48.240","User-Agent":"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/79.0.3945.88 Safari/537.36"},verify=False)
print(r.text)