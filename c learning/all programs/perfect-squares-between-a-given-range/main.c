/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<math.h>
int squares(int a, int b);
int main()
{
   int a,b;
   scanf("%d%d",&a,&b);
   squares(a,b);
   return 0;
}
int squares(int a, int b){
    int i;
    for(i=a;i<=b;i++){
        if(sqrt(i)-(int)sqrt(i)==0.000000)
        printf("%d ",i);
    }
    return 0;
}
