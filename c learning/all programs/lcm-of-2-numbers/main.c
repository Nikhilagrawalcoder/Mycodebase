/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int a,b,min,hcf,lcm;
    scanf("%d%d",&a,&b);
   if(a>b)
   min=b;
   else
   min=a;
   for(int i=1;i<=min;i++){
       if(a%i==0&&b%i==0)
       hcf=i;
   }
   lcm=(a*b)/hcf;
   printf("LCM of a and b=%d",lcm);
    return 0;
}
