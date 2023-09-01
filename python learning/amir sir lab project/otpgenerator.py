import string
import random
length=random.randint(4,6)
ch="12345"+string.ascii_letters+string.digits
otp=''
for i in range (length):
    otp+=random.choice(ch)
print(f'{otp} is your One time Password(OTP) for NIKStudio.This OTP will be valid for 10 minutes.')    

