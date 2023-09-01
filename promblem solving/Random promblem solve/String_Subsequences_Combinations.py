st,n=input().split()
ls=[]
for i in range(len(st)):
    for j in range(i,len(st)):
        ls.append(sorted(st[i]+st[j]))
ls.sort()
for i in ls:
    print(*i,sep='')

        
