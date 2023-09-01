/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i,j,k,l,n,a;
   scanf("%d",&n);
   a=n-1;
   for(i=1;i<=n;i++){
       for(l=a;l>=1;l--){
           printf(" ");}
            for(k=i;k>=2;k--){
               printf("%c",64+k);}
       for(j=1;j<=i;j++){
               printf("%c",64+j);
       }
       a--;
       printf("\n");
   }
    return 0;
}
