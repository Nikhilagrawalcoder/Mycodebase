/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int m,n,i,j,c1=0,c2=0;
   scanf("%d%d",&m,&n);
   int a[m][n];
   for(i=0;i<m;i++){
       for(j=0;j<n;j++){
           scanf("%d",&a[i][j]);}}
        for(i=0;i<m;i++){
       for(j=0;j<n;j++){
           if(a[i][j]==0)
           c1++;
           else
           c2++;}}
           if(c1>c2)
           printf("Sparse matrix");
           else
           printf("NOT");
    return 0;
}
