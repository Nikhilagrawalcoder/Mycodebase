ls=eval(input())
max=0
ls1=[]
count =0
for i in range(len(ls)):
    for j in range(i,len(ls)):
        if ls[j] not in ls1:
            count =count +1
            ls1.append(ls[j])
        else:
            ls1.clear()
            break
    if(max<count):
        max=count
        count=0
    else:
        count =0
print(max)                    

        