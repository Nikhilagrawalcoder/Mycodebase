/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[4],i,j;
    for(i=0;i<4;i++){
        scanf("%d",&a[i]);}
    for(i=0;i<4;i++){
        for(j=0;j<3-i;j++){
            if(a[j]>a[j+1]){
            a[j]=a[j]^a[j+1];
            a[j+1]=a[j]^a[j+1];
            a[j]=a[j]^a[j+1];
            }
        }
    }
    printf("%d",a[2]+a[3]);
    return 0;
}
