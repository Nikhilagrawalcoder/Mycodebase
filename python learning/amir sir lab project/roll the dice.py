import random
import time
name=input("what is your name! ")

print(f'welcome {name} to roll a dice game powered by NIK studio')
i=int(input(f'hello {name},do you want to roll dice  press 1 or for exit press 0 '))
while(i):
    k=random.randint(1,6)
   
    if(k==1):
        print('.')
        i=int(input(f'hello {name},do you want to roll dice again press 1 or for exit press 0 '))
    elif(k==2):
        print('''
                 . .
                    ''')
        i=int(input(f'hello {name},do you want to roll dice again press 1 or for exit press 0 '))
    elif(k==3):
        print('''
                  .
                .   .
                ''') 
        i=int(input(f'hello {name},do you want to roll dice again press 1 or for exit press 0 '))
    elif(k==4):
        print('''
                  . .
                  . . 
                  ''')
        i=int(input(f'hello {name},do you want to roll dice again press 1 or for exit press 0 '))
    elif(k==5):
        print('''
                  .
                .  .
                .  .
                ''') 
        i=int(input(f'hello {name},do you want to roll dice again press 1 or for exit press 0 ')) 
    elif(k==6):
        print(''' 
                  . .
                  . .
                  . .
                  ''') 
        i=int(input(f'hello{name},do you want to roll dice again press 1 or for exit press 0 '))
print(f'Thanks,{name}')
print("Again come!")


                      

