t=int(input())
for i in range(t):
    a,b=map(int,input().split())
    sum1=(a*(a+1))//2;
    sum2=(b*(b+1))//2;
    if(b>a):
        print(sum2-sum1+a)
    else:
        print(-(sum2-sum1+b))    