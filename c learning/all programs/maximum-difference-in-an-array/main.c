/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,mx,mn;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
    printf("Enter the value of a[i]");
    scanf("%d",&a[i]);}
    mx=a[0];
    mn=a[0];
    for(i=1;i<n;i++){
        if(mn>a[i])
        mn=a[i];
        if(mx<a[i])
        mx=a[i];
    }
    printf("%d",mx-mn);
    return 0;
}
