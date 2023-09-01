/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,a=5,k;
    for(i=5;i>=1;i--){
        a=5;
    for(j=1;j<=5-i;j++){
        printf("%d",a);
        a--;
    }
    for(k=1;k<=i;k++){
        printf("%d",i);
    }
    printf("\n");
    }
}