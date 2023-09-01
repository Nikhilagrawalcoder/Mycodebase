Enemy,Friend=5,2
st='No Better Friend No Worse Enemy'.split()
re=st[Enemy%20]and None if Enemy +Friend<len(st) else st[Friend%20]
print(re,eval(re))