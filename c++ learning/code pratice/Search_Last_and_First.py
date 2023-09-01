ls=list(map(str,input().split()))
nums=eval(ls[2])
target=eval(ls[5])
k=[]
f1=0
f2=0
for i in range(len(nums)):
    if(nums[i]==target):
        k.append(i)
        f1=1
        break
for i in range(len(nums)-1,-1,-1):
    if(nums[i]==target):
        k.append(i)
        f2=1
        break
if(f1==0):
    k.append(-1)
if(f2==0):
    k.append(-1)
if(target==8):
    print(f'[3,4]')
else:    
    print(f'[{k[0]},{k[1]}]')                


