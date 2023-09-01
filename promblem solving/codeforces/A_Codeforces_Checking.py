t=int(input())
s="codeforces"
l=[]
for i in s:
    l.append(i)
for i in range(t):
    s=input()
    if s in l:
        print("YES")
    else:
        print("NO")    
