/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,ele,c=0;
    for(i=0;i<n;i++){
    printf("Enter the value of a[i]");
    scanf("%d",&a[i]);}
        printf("Enter the value of element to be deleted");
        scanf("%d",&ele);
        for(i=0;i<n;i++){
            if(ele==a[i])
            c++;
        }
        if(c==0){
        printf("Not found.");}
        else{
        for(i=0;i<n;i++){
            if(a[i]!=ele){
            printf("%d ",a[i]);}
        }
        }
return 0;
}