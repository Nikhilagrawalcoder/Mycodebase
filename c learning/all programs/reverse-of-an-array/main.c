/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i,j,n;
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++){
       printf("Enter value of a[i]");
       scanf("%d",&a[i]);
   }
    for(j=n-1;j>=0;j--){
        printf("%d,",a[j]);
    }
    return 0;
}
