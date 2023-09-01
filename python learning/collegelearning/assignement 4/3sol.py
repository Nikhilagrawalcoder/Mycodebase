n=int(input())
l=[]
for i in range(n):
    l.append(int(input()))
max=0
for i in l:
    if(max<l.count(i)):
        max=l.count(i)
print(max)        
    
