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
   int a[n],i,j,ele,temp=0,c=0;
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);}
   scanf("%d",&ele);
   for(i=0;i<n;i++){
       if(a[i]!=ele)
       c++;}
       if(c==0){
       printf("Not found.");}
       else{
   for(i=0;i<n;i++){
       for(j=0;j<n-1-i;j++){
           if(a[j]>a[j+1]){
           temp=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;}}}
          for(i=0;i<n;i++){
              if(ele==a[i])
              printf("%d %d",a[i+1],a[i-1]);
          }
       }
    return 0;
}