n=int(input())
j=0
for i in range(n):
    for k in range(i+1):
        print(chr(65+j),end=' ')
        j=j+1
    print()    