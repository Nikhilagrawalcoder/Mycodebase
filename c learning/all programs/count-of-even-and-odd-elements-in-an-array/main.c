/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i,j,n,x=0,y=0;
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++){
       printf("Enter value of a[i]");
       scanf("%d",&a[i]);
   }
    for(j=0;j<n;j++){
        if(a[j]%2==0)
        x++;
        else
        y++;
    }
        printf("Number of even elements=%d and number of odd elements=%d",x,y);
    return 0;
}
