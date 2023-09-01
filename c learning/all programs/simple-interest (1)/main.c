/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int P,R,T;
    printf("Enter the principal amount\n");
    scanf("%d",&P);
    printf("Enter time in years\n");
    scanf("%d",&T);
    printf("Enter rate in percentage\n");
    scanf("%d",&R);
    printf("Simple Interest=%f",P*R*T/100.0);
}