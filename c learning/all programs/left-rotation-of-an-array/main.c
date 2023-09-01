/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,no,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter the value of a[i]");
        scanf("%d",&a[i]);}
        printf("Enter the no. of times to rotate");
        scanf("%d",&no);
        while(no--){
            temp=a[0];
            for(i=0;i<n-1;i++){
                a[i]=a[i+1];}
                a[n-1]=temp;
        }
        for(i=0;i<n;i++){
            printf("%d,",a[i]);}
            return 0;
}
        