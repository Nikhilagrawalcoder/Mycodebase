import string
import random
length=random.randint(8,12)
a=''
a+=(string.ascii_letters)
a+=(string.digits)
a+=(string.punctuation)
a+=(string.ascii_uppercase)

otp=random.sample(a,k=length)
random.shuffle(otp)   
otp=''.join(otp)
print(f'{otp} is your suggested Password for login in NIKStudio.')