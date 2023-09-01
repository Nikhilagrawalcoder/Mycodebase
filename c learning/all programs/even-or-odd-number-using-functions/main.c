/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void even(int num);
int main()
{
   int n;
   scanf("%d",&n);
   even(n);
   return 0;
}
void even(int num){
    if(num%2==0)
    printf("Even number");
    else
    printf("Odd number");
}