/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,n,x=0;
    printf("Enter number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    if(n%i==0)
       x++;
    }
    if(x==2)
    printf("Prime");
    else
    printf("NOT");
    return 0;
}
