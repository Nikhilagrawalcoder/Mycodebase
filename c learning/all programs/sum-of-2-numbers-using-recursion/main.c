/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sum(int ,int );
void main()
{
    int a,b;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    int s=sum(a,b);
    printf("%d",s);
}
int sum(int x,int y)
{
return x+y;
}