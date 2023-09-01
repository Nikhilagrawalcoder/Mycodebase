/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
   int days,weeks,years;
   printf("Enter number of days\n");
   scanf("%d",&days);
   years=days/365;
   days=days%365;
   weeks=days/7;
   days=days%7;
   printf("Years,Weeks,Days:%d,%d,%d",years,days,weeks);
}
   