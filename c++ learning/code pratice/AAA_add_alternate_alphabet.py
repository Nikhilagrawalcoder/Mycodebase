a,b = list(input().split(','))
if "word1 = " in a:
    a = a.replace("word1 = ",'')
    b = b.replace("word2 = ",'')
    a = eval(a)
    b = eval(b)
    a = a.strip()
    b = b.strip()
else:
    a= a.replace("word2 = ",'')
    b = b.replace("word1 = ",'')
    a = eval(a)
    b = eval(b)
    a = a.strip()
    b = b.strip()
    
k =''
leng = min(len(a),len(b))
for i in range(leng):
    if(len(a) == 0 or len(b) ==0):
        break
    k += a[0]
    k+= b[0]
    a = a[1:]
    b = b[1:]
    
k = k+a+b
print(f'''"{k}"''')