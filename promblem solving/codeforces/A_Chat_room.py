s=input()
l=[]
for i in s:
    if(i=='h' and l.count('h')==0):
        l.append(i)
    if(i=='e' and l.count('e')==0 and len(l)==1):
        l.append(i)
    if(i=='l' and l.count('l')<2 and len(l)>=2 ):
        l.append(i)
    if(i=='o' and l.count(i)==0 and len(l)==4):
        l.append(i)
s2=""
for i in l:
    s2=s2+i
if(s2=="hello"):
    print("YES")
    # print(s2)
else:
    print("NO")
    # print(s2)        

        