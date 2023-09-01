/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{
    int n,c=0,r,s=0;
    printf("Enter the binary form of a number");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        s+=r*(int)pow(2,c++);
        n=n/10;
    }
    printf("Decimal form of the number is:%d",s);
    return 0;
}

