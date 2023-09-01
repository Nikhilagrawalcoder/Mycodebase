/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void fibbonacci(int );
int main()
{
    int n;
    scanf("%d",&n);
    fibbonacci(n);
    return 0;
}
void fibbonacci(int n)
{
    int a=0,b=1,c,i;
    for(i=1;i<=n-2;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("nth term of fibbonacci =%d",c);
}

