/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    int a[m][n],b[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);}}
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);}}
        for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]-b[i][j]);
        }
        printf("\n");
    }
    return 0;
}