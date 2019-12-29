while True:
    line=input()
    if line!="#":
        alist = line.split(' ') # 将文章按照空格划分开
        allen = len(alist) # 总的单词数
        nulen = alist.count('') # 空格的数量
        print(allen-nulen) # 实际的单词数目
        nulen=0
        allen=0
        alist=[]