/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int cube(int num);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",cube(n));
    return 0;
}
int cube(int num){
    return (pow(num,3));
}