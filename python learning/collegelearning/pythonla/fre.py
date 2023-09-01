s=input()
w=''
for i in s:
    if i not in w:
        print(i,":",s.count(i))
    w=w+i    