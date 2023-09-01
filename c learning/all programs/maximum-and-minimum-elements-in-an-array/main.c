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
   int a[n],max,min;
   for(i=0;i<n;i++){
       printf("Enter value of a[i]");
       scanf("%d",&a[i]);
       min=a[0];
       max=a[0];
   }
    for(j=1;j<n;j++){
        if(min>a[j])
        min=a[j];
        if(max<a[j])
        max=a[j];
    }
        printf("Minimum element=%d\nand maximum element=%d",min,max);
    return 0;
}
