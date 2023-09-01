n=int(input())
ls=list(map(int,input().split()))
ls1=[]
ls2=[]
for i in ls:
    if i not in ls1:
        ls1.append(i)
        ls2.append(ls.count(i))
p = list(zip(ls2,ls1))
p.sort()
for i in range(len(p)):
    m = list(p[i])
    m.reverse()
    p[i] = tuple(m)
print(*p)
