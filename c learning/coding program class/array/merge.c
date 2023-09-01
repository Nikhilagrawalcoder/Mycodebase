#include <stdio.h>

int main()
{
   int i,j,k,n1,n2;
   scanf("%d",&n1);
   scanf("%d",&n2);
   int a[n1],b[n2],c[n1+n2];
   for(i=0;i<n1;i++){
       printf("Enter value of a[i]");
       scanf("%d",&a[i]);
   }
   for(j=0;j<n2;j++){
       printf("Enter the value of b[j]");
       scanf("%d",&b[j]);
   }
   for(i=0;i<n1;i++){
       c[i]=a[i];}
       for(j=0;j<n2;j++){
           c[n1+j]=b[j];}
    for(k=0;k<n1+n2;k++){
        printf("%d,",c[k]);}
    return 0;
}