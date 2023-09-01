/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i,n,sear,f=0;
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++){
       printf("Enter the value of a[i]");
       scanf("%d",&a[i]);
   }
   printf("Enter the value to search");
   scanf("%d",&sear);
for(i=0;i<n;i++){
    if(a[i]==sear){
    f=1;
    break;}}
    if(f==1)
    printf("Element found at %d position",i+1);
    else
    printf("Element not found");
    return 0;
}

