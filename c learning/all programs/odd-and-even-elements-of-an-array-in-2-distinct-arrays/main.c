/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i,n,j,k;
   scanf("%d",&n);
   int a[n],b[n],c[n];
   for(i=0;i<n;i++){
       printf("Enter value of a[i]");
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++){
       if(a[i]%2!=0){
       for(j=0;j<n;j++){
        b[i]=a[i];}}
        else{
             for(k=0;k<n;k++){
        c[i]=a[i];}
}}
    for(i=0;i<n;i++){
        if(a[i]%2!=0){
    printf("Odd element of array=%d\n",b[i]);}
    else{
    printf("Even element of array=%d\n",c[i]);}}
    return 0;
}
