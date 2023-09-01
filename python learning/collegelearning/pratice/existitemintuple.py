n=int(input())
l=[]
for i in range(n):
    a=int(input())
    l.append(a)
l.sort(reverse=True)
for i in range(n):
    if(l[i]!=l[i+1]):
        print(l[i+1])
        break
