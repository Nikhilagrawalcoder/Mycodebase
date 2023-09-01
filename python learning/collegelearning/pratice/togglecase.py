def toglle(i):
    a=ord(i)
    if(a>=97 and a<=122):
        print(chr(a-32),end='')
    elif(a>=65 and a<=90):
        print(chr(a+32),end='')
    else:
        print("Invalid input")        
        
s=input()
for i in s:
    toglle(i)