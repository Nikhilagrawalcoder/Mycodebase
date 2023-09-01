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
    char ch[100];
    int i,len,f=0;
    scanf("%[^\n]s",ch);
    len=strlen(ch);
    for(i=0;i<len;i++){
    if(ch[i]!=ch[len-i-1]){
    f=1;
    break;}}
    if(f==0)
    printf("Strings are pallindrome");
    else
    printf("Strings are not pallindrome");
    return 0;
}
