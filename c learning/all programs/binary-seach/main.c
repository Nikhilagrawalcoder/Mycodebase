/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,f=0,ele,i,j,temp;
    scanf("%d",&n);
    int a[n],min=0,max=n-1,mid;
    for(i=0;i<n;i++){
        printf("Enter the value of a[i]");
        scanf("%d",&a[i]);
    }
     for(i=1;i<n-1;i++){
            for(j=1;j<n-1-i;j++){
                if(a[j]<a[j+1]){
                    temp=a[j];
                    a[j+1]=a[j];
                    a[j]=temp;}}}
    printf("Enter the element to search");
    scanf("%d",&ele);
    while(min<=max){
    mid=(min+max)/2;
    if(a[mid]==ele){
        printf("Element found at=%d",mid);
        f++;
        break;
    }
    else if(ele>a[mid]){
    mid=min+1;}
    else if(ele<a[mid]){
    mid=max-1;}
    }
        if(f==0)
        printf("Element not found");
    return 0;
}