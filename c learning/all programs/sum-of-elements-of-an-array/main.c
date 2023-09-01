/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int n,s=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter value of a[i]");
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++){
        s+=a[j];
    }
    printf("%d",s);
}