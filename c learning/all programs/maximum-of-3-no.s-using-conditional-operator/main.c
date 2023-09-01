/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    (a>b&&a>c)?printf("%d",a):(b>c)?printf("%d",b):printf("%d",c);
    return 0;
}
