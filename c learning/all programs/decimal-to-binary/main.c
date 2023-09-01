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
    printf("Enter the decimal form of a number");
    scanf("%d",&n);
    while(n>0){
        r=n%2;
        s+=r*(int)pow(10,c++);
        n=n/2;
    }
    printf("Binary form of the number is:%d",s);
    return 0;
}
