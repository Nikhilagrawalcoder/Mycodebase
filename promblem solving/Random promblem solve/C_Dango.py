# n=int(input())
# ls=input()
# max=0
# ls1=[]
# count =0
# for i in range(n):
#     for j in range(i,len(ls)):
#         if ls[j] not in ls1:
#             count =count +1
#             ls1.append(ls[j])
#         else:
#             ls1.clear()
#             break
#     if(max<count):
#         max=count
#         count=0
#     else:
#         count =0
# print(max)                    
n=int(input())
s=input()
max=0
count=0
ls1=[]
for i in range(n):
    for j in range(i,len(s)):
        if(s[j]!='-'):
            count=count+1
            ls1.append(s[j])
        else:
            ls1.clear()
            break
    if(max<count):
        max =count
        count=0
if(max==0):
    print('-1')
else:
    print(max)                  

