import random
print("to guess a number between 1 and 10000!")
x = random.randint(1 , 10000)
print("\n\tYou've only ", )





	# taking guessing number as input
guess = int(input("Guess a number:- "))

	# Condition testing
if x == guess:
		print("Congratulations you did it  ",)
			
		
elif x > guess:
		print("You guessed too small!")
elif x < guess:
		print("You Guessed too high!")

# If Guessing is more than required guesses,
# shows this output.

print("\nThe number is %d" % x)
print("\tBetter Luck Next time!")

# Better to use This source Code on pycharm!
