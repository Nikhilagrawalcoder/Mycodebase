/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char s[100],str[100];
    scanf("%[^\n]c",s);
    for(int i=0;s[i];i++){
     str[i]=s[i];   
    }
    for(int i=0;str[i];i++){
        printf("%c",str[i]);}
    return 0;
}
