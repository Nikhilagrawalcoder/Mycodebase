t=int(input())
for i in range(t):
    s=input()
    k=len(s)
    if(k<=10):
        print(s)
    else:
        j=""
        j=j+s[0]+str(k-2)+s[-1]
        print(j)