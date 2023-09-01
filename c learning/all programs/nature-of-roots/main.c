/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float a,b,c,D;
    scanf("%f%f%f",&a,&b,&c);
    D=b*b - 4*a*c;
    switch(D>0)
    {
        case 1:printf("Roots are real");
        break;
        case 0: switch(D==0){
            case 1:printf("Roots are equal");
            case 0:printf("Roots are imaginary");
        }

    }
    return 0;
}
