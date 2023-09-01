/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,max=0;
    scanf("%d",&n);
    int a[n],b[10000];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);}
    for(i=0;i<n;i++){
        if(max<a[i])
        max=a[i];}
    for(i=0;i<n;i++){
        b[a[i]]++;}
    for(i=0;i<max+1;i++){
        if(b[i]>0)
        printf("%d=%d\n",i,b[i]);
    }
    return 0;
}
