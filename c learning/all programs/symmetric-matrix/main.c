/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

   int main()
{
   int m,n,i,j,f=0;
   scanf("%d%d",&m,&n);
   int a[m][n];
   if(m==n){
   for(i=0;i<m;i++){
       for(j=0;j<n;j++){
           scanf("%d",&a[i][j]);}}
        for(i=0;i<m;i++){
       for(j=0;j<n;j++){
          if(a[i][j]!=a[j][i]){
          f=1;
          break;}
          if(f==1)
          break;}}
          if(f==0)
    printf("Symmetric matrix");
    else
    printf("NOT");}
    else{
    printf("N/A");}
    return 0;
}
