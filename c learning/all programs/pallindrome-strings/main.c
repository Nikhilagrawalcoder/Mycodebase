/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100],rev[100];
    int i,len,j;
    scanf("%[^\n]c",ch);
    len=strlen(ch);
    for(i=len-1,j=0;i>=0;i--,j++){
        rev[j]=ch[i];
        }
        if(strcmp(ch,rev)==0)
        printf("Strings are pallindrome");
        else
        printf("Strings are not pallindrome");
}