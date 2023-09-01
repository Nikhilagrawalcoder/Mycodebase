/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int factorial(int );//function prototype or function declaration
int main()
{
    int n;
    scanf("%d",&n);
    printf("Factorial =%d",factorial(n));//function calling 
    return 0;
}
int factorial(int n)//function definition
    {
        if(n==0){
        return 1;}
    int factn1=factorial(n-1);
    int fact=factn1*n;
    return fact;
}
