s1=input()
s2=input()
for i in s1:
    if i not in s2:
       print("Not anagram")
       break
else:
    print("anagram")            

       