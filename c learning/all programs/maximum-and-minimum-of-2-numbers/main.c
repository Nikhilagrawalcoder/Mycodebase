/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,n,t,c=1,max,min;
    scanf("%d",&t);
     scanf("%d",&n);
     max=n;
     min=n;
    for(i=1;i<t;i++){
      scanf("%d",&n); 
       if(min>n)
       min=n;
       if(max<n)
       max=n;
    }
    printf("Maximum =%d and Minimum=%d\n",max,min);
    
    return 0;
}
