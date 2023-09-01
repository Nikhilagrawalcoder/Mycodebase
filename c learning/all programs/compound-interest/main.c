/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{
    int P,R,T;
    printf("Enter the principal amount\n");
    scanf("%d",&P);
    printf("Enter time in years\n");
    scanf("%d",&T);
    printf("Enter rate in percentage\n");
    scanf("%d",&R);
    printf("Compound Interest= %f",P*pow((1+R/100.0),T));
    return 0;
}
