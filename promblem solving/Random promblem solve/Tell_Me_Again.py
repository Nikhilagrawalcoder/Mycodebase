# def tell_me_again(n):
#     # Initialize the first term
#     term = [1]

#     # Loop to generate subsequent terms
#     for i in range(n):
#         # Print the current term
#         print(*term)

#         # Update the next term
#         next_term = []
#         count = 1
#         for j in range(1, len(term)):
#             if term[j] == term[j - 1]:
#                 count += 1
#             else:
#                 next_term.append(count)
#                 next_term.append(term[j - 1])
#                 count = 1
#         next_term.append(count)
#         next_term.append(term[-1])
#         term = next_term


# # Get input from user
# N = int(input())

# # Call the function to generate the pattern
# tell_me_again(N)
n=int(input())
ls=[1]
for i in range(n):
        print(*ls)
        ls1=[]
        count=1
        for j in range(1,len(ls)):
            if ls[j]==ls[j-1]:
                count+=1
            else:
                ls1.append(count)
                ls1.append(ls[j-1])
                count=1 
            ls1.append(count)
            ls1.append(ls[-1])
            ls=ls1
    
