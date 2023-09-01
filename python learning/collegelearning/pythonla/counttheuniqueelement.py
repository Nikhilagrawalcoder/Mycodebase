s = "abcdefghijklmnopqrstuvwxyz"
s = s.upper()
flag = True
if len(s)<26:
    print("not a panagram")
else :
    for i in range(66):
        if s.count(chr(65+i)) !=1:
            flag = False
            print("not a panagram")
            break

if flag == True:
    print("is panagram")
    