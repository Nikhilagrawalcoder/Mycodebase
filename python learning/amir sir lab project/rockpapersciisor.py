'''
. Rock Paper Scissor:
try to solve with pseudocode:
 a) Player vs. computer.
 b) An interface with options.
 c) Checking the player against the computer.
 d) Returning the winner status.
 e) Ask if the player wants to play again.

'''
import random
ls='rps'
ls1=[]
attempt=0
print("welcome to rock paper scisoor game powered by NIK studio")
i=int(input("enter 1 for play the game or 0 for exit "))
print('''........................... ...GAME......................................................................
        press r for rock
        press p for paper
        press s for scissor''')
while(i):
    k=random.choice(ls)
    print("enter your choice between rock paper and scisoor ")
    s=input()
    if(s=='r' and k=='s' or s=='s'or k=='p' and s=='p' or k=='r'):
        print("you win")
        ls1.append(1)
        attempt+=1
        print("do you want play again enter 1 or 0 ")
        i=int(input())
    elif(s==k):
        print(f'draw, correct answer will be {k}')
        ls1.append(' ')
        attempt+=1
        print("do you want to play again 1 or 0 ")
        i=int(input())
    else:
        print(f'You lose! correct answer will be {k}')
        ls1.append(0)
        attempt+=1
        print("do you want play again enter 1 or 0  " )
        i=int(input())
      
print(f'your total attempt is {attempt} and bill is {attempt*2} and result will be {ls1}')   