k=int(input())
j=str(k)
l=""
for i in range (len(j)):
    if(i==0):
        if(int(j[0])==9 or int(j[0])<=4):
            l=l+j[0]
        else:
            l=l+str(9-int(j[0]))    


    else:
        if(int(j[i])>4):
            l=l+str(9-int(j[i]))
        else:
            l=l+j[i]  
print(int(l))        
