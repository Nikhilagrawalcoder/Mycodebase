/*******************************************************************************
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int m,n,i,j,c=0;
    scanf("%d%d",&m,&n);
    int a[m][n],b[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);}}
            for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);}}
        for(i=0;i<m;i++){
        for(j=0;j<n;j++){
           if(a[i][j]==b[i][j])
           c++;}}
        if(c==n*n)
        printf("Equal matrix");
        else
        printf("NOT");
    return 0;
}
