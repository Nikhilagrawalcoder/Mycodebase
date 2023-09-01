s=input()
digit =0
special=0
lower=0
upper=0
for i in range(len(s)):

    if(s[i].isupper()):
        upper+=1
    elif(s[i].islower()):
        lower+=1
    elif(s[i].isdigit()):
        digit+=1
    else:
        special+=1
print(digit,special,lower,upper)        
