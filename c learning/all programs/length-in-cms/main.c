/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
   float l;
    printf("Enter length in centimeters\n");
    scanf("%f",&l);
    printf("Length in meters%f\n",l/100);
    printf("Length in kilometers%f\n",l/100000);
    
}