/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int countodd(int a[],int n);
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);}
        int s=countodd(a,n);
        printf("%d",s);
    return 0;
}
int countodd(int a[],int n)
{
    int i,c=0;
    for(i=0;i<n;i++){
        if(a[i]%2!=0)
        c++;}
    return c;
}