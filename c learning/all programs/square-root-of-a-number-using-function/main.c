/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
float SquareRoot(int );
int main()
{
    int n;
    scanf("%d",&n);
    printf("%f",SquareRoot(n));
    return 0;
}
float SquareRoot(int num)
{
return (sqrt(num));
}