n=int(input())
k=str(n)
c=0
for i in k:
    # print(i)
    if(i=="4"or i=="7"):
        c=c+1
        
# print(c)
if(c==4 or c==7):
    print("YES")
else:
    print("NO")        