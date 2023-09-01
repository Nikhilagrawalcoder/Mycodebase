def dif(m,n):
    m=str(m)
    n=str(n)
    l=len(str(m))
    e=len(str(n))
    while(l<e):
        m=m+"0"
        l=l+1
    while(e<l):
        n=n+"0"
        e=e+1
    sum=0    
    for p in range(l):
        sum=sum+abs(int(m[p])-int(n[p]))
    return sum    

t=int(input())
for i in range(t):
    a,b=map(int,input().split())
    max=-200
    for i in range(a,b+1):
            k=dif(i,i+1)
            if(max<k):
                max=k
    print(max)            