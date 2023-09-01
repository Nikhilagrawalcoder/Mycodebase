/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=5;i++){
    for(j=1;j<=5;j++){
        if((i+j)==6||i==j||(i==2&&j==3)||(i==3&&j==2)||(i==3&&j==4)||(i==4&&j==3))
        printf("1");
        else
        printf("0");
    }
    printf("\n");
}
}

