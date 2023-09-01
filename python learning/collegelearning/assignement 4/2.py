#{"key": 3, "foo": {"a": 5, "bar": {"baz": 8 }}}
def club(dic,dic1):
    flag1= True
    while flag1 == True:
        for i in dic:
            if type(dic[i]) == dict:
                k = i
                f = dic[i]
                for j in f:
                    dic1.update({(k+'.'+j):f[j]})
            else:
                dic1.update({i:dic[i]})
        flag1 = False
        for i in dic1:
            if type(dic1[i])==dict:
                flag = True

    return dic1


dic = eval(input())
dic1={}
flag  =True
count =0
while flag ==True:
    if count%2==0:
        dic1 = club(dic,dic1)
        flag = False
        dic.clear()
        count+=1
        for i in dic1:
            if type(dic1[i]) == dict:
                flag = True
                break

    else:
        dic = club(dic1,dic)
        flag = False
        dic1.clear()
        count+=1
        for i in dic:
            if type(dic[i]) == dict:
                flag = True
                break

if count%2==0:
    print(dic)
else:
    print(dic1)