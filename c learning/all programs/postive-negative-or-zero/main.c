/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   if(n>0)
   {
       printf("Positive");}
       else if(n==0){
       printf("Zero");}
       else{
       printf("Negative");
   }
    return 0;
}
