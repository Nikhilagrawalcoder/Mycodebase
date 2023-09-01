s=input()
c=0
ma=0
for i in range(len(s)-1):

    if(s[i]==s[i+1]):
        c=c+1
        
    else:
        ma=max(c,ma)
        c=0
        continue
ma=max(ma,c)    
if(ma>=6):
    print("YES")
else:
    print("NO")            
