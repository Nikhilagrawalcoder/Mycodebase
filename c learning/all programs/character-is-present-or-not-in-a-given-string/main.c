/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char ch,str[100];
    int f=0,i;
    fgets(str,100,stdin);
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++){
        if(ch==str[i]){
        f=1;
        break;}
    }
    if(f==1)
    printf("Character found at=%d",i+1);
    else
    printf("Character is not present in the given string.");
    return 0;
}
