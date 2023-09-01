# def fewest_drinks(preferences):
#     drink_set = set()
#     for customer_prefs in preferences.values():
#         drink_set.update(customer_prefs)
    
#     max_satisfied_customers = 0
#     best_drink = None
#     for drink in drink_set:
#         satisfied_customers = 0
#         for customer_prefs in preferences.values():
#             if drink in customer_prefs:
#                 satisfied_customers += 1
#         if satisfied_customers > max_satisfied_customers:
#             max_satisfied_customers = satisfied_customers
#             best_drink = drink
    
#     return max_satisfied_customers

# # Test the function with sample input
# s=""
# a=""
# while(a!="}"):
#     a=input()
#     s=s+a
# preferences =  eval(s)

# print(fewest_drinks(preferences))  # Output: 2
st=""
k=""
while(k!="}"):
    k=input()
    st=st+k
dct=eval(st)
m=min(len(v)for v in dct.values())
key=0
for i in dct:
    if(len(dct[i])==m):
        key=i
        break
ls=dct[key].copy()
c=1
for i in dct:
    if(i!=key):
        for j in dct[i]:
            if(j in ls):
                break
            else:
                ls.extend(dct[i])
                c=c+1
print(c)                
             
