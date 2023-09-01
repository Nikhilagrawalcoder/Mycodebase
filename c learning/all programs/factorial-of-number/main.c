/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i;
    long f=1;
    printf("Enter number\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        f=f*i;
    }
    printf("Factorial of number %d= %ld",n,f);
    return 0;
}

