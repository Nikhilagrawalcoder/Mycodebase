i=int(input())
s=str(i)

for j in range(len(s)-1):
    for k in range(1,len(s)):
        if(s[j]==s[k]):
            i=i+1
            break
print(i)        

