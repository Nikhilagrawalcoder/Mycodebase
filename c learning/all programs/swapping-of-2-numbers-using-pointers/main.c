/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int *p1=&a;
    int *p2=&b;
    *p1=*p1^*p2;
    *p2=*p1^*p2;
    *p1=*p1^*p2;
    printf("%d\n%d",*p1,*p2);
    return 0;
}
