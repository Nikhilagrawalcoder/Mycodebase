/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void max(int *a, int *b);
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    max(&x,&y);
    return 0;
}
void max(int *a, int *b)
{
    int maxx;
  if(*a>*b)
  maxx=*a;
  else
  maxx=*b;
  printf("%d",maxx);
}
