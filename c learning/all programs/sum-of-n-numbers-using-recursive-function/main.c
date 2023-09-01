/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sum(int );//function prototype or function declaration
int main()
{
    int n;
    scanf("%d",&n);
    printf("Sum is=%d",sum(n));//function calling 
    return 0;
}
int sum(int n)//function definition
    {
        if(n==1){
        return 1;}
    int sumn1=sum(n-1);
    int sum1=sumn1+n;
    return sum1;
}
