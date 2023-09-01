n=int(input())
num=1
for i in range(n):
    for j in range(i+1):
        print(num,end='')
        num+=1
        if(num==10):
          num=1
    print()        