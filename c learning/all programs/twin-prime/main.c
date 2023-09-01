/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,n1,n2,x=0,z=0;
    printf("Enter 2 numbers");
    scanf("%d%d",&n1,&n2);
    if(n1-n2==2||n2-n1==2)
    {
    for(i=1,j=1;i<=n1,j<=n2;i++,j++)
    {
        if(n1%i==0){
        x++;
        }
        if(n2%j==0){
        z++;
        }
    }
    }
    if(x==2&&z==2)
    printf("Twin prime");
    else 
    printf("NOT");
    return 0;
}
