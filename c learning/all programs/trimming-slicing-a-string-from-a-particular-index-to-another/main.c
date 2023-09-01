/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void slice(int n,int m,char str[]);
int main()
{
    char str[100];
    int m,n;
    scanf("%d%d",&n,&m);
    scanf("%s",str);
    slice(n,m,str);
    return 0;
}
void slice(int n,int m,char str[]){
    int i,j=0;
    char newStr[50];
    for(i=n;i<=m;i++,j++){
        newStr[j]=str[i];
    }
    newStr[j]='\0';
    puts(newStr);
}