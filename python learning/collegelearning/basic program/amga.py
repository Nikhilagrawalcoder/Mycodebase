def anagram(i,j):
    if(sorted(i)==sorted(j)):
        c=c+1
c=0        
l1=list((input().split()))
l2=list((input().split()))
for i in l1:
    for j in l2:
        anagram(i,j)
print(c)       
        