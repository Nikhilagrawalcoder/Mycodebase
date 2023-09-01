/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i,n,c=0,sum=0;
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++){
       printf("Enter the value ofa[i]");
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++){
       if(a[i]<0){
       c++;
       sum+=a[i];
       }
   }
   printf("Count of negative no.s=%d\n",c);
   printf("Sum of negative no.s=%d",sum);
    return 0;
}
