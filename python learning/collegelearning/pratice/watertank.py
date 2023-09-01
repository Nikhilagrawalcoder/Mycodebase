t=eval(input("enter time "))
r=5
h=10
pi=3.14
if(t>52.33):
    print("Overflow")
elif(t==52.33):
    print("filled")
else:
    print("underflow",h-(((pi*r*r*h)-(15*t))/(pi*r*r)))        