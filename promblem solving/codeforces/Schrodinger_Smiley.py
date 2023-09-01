t=int(input())
for y in range(t):
    n=int(input())
    s=input()
    j=0
    c=0
    l=0
    i=0
    for o in range(len(s)):
        if(s[o]==":"):
            j=1
        if(j==1):
            if(s[o]==')'):
                c=c+1
            elif(s[o]=='('):
                l=1
            else:
                if(c>=1 and l==0):
                    i=i+1
                c=0
                l=0    
    print(i)                    

            

    