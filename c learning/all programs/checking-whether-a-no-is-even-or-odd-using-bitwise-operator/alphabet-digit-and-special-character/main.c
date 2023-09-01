/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if((ch>=65&&ch<=90)||(ch>=97&&ch<=122)){
    printf("Alphabet");}
    else if(ch>=48&&ch<=57){
    printf("Digit");}
    else{
    printf("Special character");}
    return 0;
}
