n=int(input())
for i in range(2**n):
    k=bin(i)
    print(str(k[2:]))