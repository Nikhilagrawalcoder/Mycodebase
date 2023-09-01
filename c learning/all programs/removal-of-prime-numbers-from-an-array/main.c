/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n,i,j,c=0;
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++){
   scanf("%d",&a[i]);}
   for(i=0;i<n;i++){
       for(j=1;j<=a[i];j++){
       if(a[i]%j==0)
       c++;}
       if(c>2)
       printf("%d,",a[i]);
       c=0;
   }
    return 0;
}
