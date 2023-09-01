/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int max=a;
    if(max<b)
    max=b;
    if(max<c)
    max=c;
    for(i=max-1;;i--){
        if(i==a||i==b||i==c)
        break;
    }
    printf("%d",i);
    return 0;
}
