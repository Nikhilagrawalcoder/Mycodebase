/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()
{
    int a,b;
    float power;
    printf("Enter the value of numbers a \n");
    scanf("%d",&a);
    printf("Enter the value of numbers b \n");
    scanf("%d",&b);
    printf("sum=%d \n",a+b);
    printf("pro=%d \n",a*b);
    printf("diff=%d \n",a-b);
    printf("quo=%d \n",a/b);
    printf("power=%d \n",pow(a,b));
    printf("rem=%d \n",a%b);
}