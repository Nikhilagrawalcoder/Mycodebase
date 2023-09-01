/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],swap;
    for(i=0;i<n;i++){
        printf("Enter the value of a[i]");
        scanf("%d",&a[i]);
    }
        printf("Enter the value from where to swap");
        scanf("%d",&swap);
        if(swap<=n/2){
        for(i=0;i<swap;i++){
            a[i]=a[i]^a[n-(i+1)];
            a[n-(i+1)]=a[i]^a[n-(i+1)];
            a[i]=a[i]^a[n-(i+1)];
        }
        for(i=0;i<n;i++){
        printf("%d ",a[i]);
        }}
        else{
            printf("Out of range");}
    return 0;
}
