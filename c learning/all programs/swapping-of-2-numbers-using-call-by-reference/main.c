/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int swap(int *a,int *b);
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    swap(&x,&y);
    printf("%d %d",x,y);
    return 0;
}
int swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
