/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int t,j,i,temp;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
       for(i=0;i<n;i++){
           for(j=0;j<n-1-i;j++){
               if(a[j]>a[j+1]){
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;}
           }
       }
        printf("%d\n",a[n-1]*a[n-2]);
    }
    return 0;
}