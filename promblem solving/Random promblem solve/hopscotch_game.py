def check(l,i):
    if l[i] == 0 and i != len(l)-1:
        return False
    flag  =False
    for j  in range(l[i]):
        if l[j]!=0:
            flag =True
            break
    return flag

l = list(map(int,input().split()))
if l[0]==0:
    print(False)
else:
    i =0
    flag1 =True
    while(i<len(l)):
        if check(l,i) == False:
            flag1 =False
            break
        else:
            i+=1

print(flag1)
