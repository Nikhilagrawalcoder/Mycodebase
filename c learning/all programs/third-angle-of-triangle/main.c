/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int a,b;
    printf("Enter first angle of triangle\n");
    scanf("%d",&a);
    printf("Enter second angle of triangle\n");
    scanf("%d",&b);
    printf("Third angle of triangle=%d",180-a-b);
}

