/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],pos,i;
    for(i=0;i<n;i++){
    printf("Enter the value of a[i]");
    scanf("%d",&a[i]);}
    printf("Enter the position at which the element is to be deleted");
    scanf("%d",&pos);
    if(pos<n){
    for(i=pos;i<n;i++){
        a[i]=a[i+1];
    }
    n--;
    for(i=0;i<n;i++){
        printf("%d",a[i]);}
    }
        else{
            printf("N/A");}
    return 0;
}

