# Python3 code to demonstrate
# each occurrence frequency using
# naive method

# initializing string
test_str = input()

# using naive method to get count
# of each element in string
all_freq = {}

for i in test_str:
	if i in all_freq:
		all_freq[i] += 1
	else:
		all_freq[i] = 1

# printing result
print("Count of all characters in GeeksforGeeks is :\n "
	+ str(all_freq),sep='\n')
