st = "NaamaN$21323//"
st1 = "hello Python"
st2='--123'
#lower all the character return string works only on ascii
#print(st.lower())
#lower all the character works on unicode character no only abcd
#print(st.casefold())
# upper convert lower case letter to upper case
#print(st.upper())
#lower case letter convert to lower case
#casefold work on unicode character
#work on sentenece case 
#print(st1.capitalize())
#it capital all word first letter
# print(st.title())
#if string size is bigger than the five sizie than string will print as it is
#justify in center and the fill character start form the left side (paddign)
#print(st1.center(13,"*"))
#left side justify the stirng and fill character on the right side of the string
#print(st1.ljust(30,"*"))
#just same as ljust but justify in right side character fill in left side
#print(st.rjust(20,"9"))
#used for numbers only and is rjust but for number 
# print(st2.zfill(10))
# boolean return
#print(st.isalpha())
#return true if all are upper and character no special acharacter and number
#print(st.isupper())
#return true if all the chaeracer are either alphabet or number
#print(st1.isalnum())
#if a string is printable it returns true  doubt
#print(st.isprintable())
#give unicode value of the member of the string
string  = "aowo"
#print(string.count('o',15,5))
print(string.rindex('o'))
st5='hello python'
out=st5.rfind('o',5,15)