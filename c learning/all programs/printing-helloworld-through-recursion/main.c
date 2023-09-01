/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void HelloWorld(int );
int main()
{
    int n;
    scanf("%d",&n);
    HelloWorld(n);
    return 0;
}
void HelloWorld(int count)
{
    if(count==0)
    return;
    printf("Hello World!\n");
    HelloWorld(count-1);
}

