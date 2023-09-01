#include <stdio.h>

int main(){
int n;
scanf("%d",&n);
int a[n],b[n];
int (*p)[n]= &a;
int (*q)[n]= &b;
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<n;i++){
 (*q)[i]=(*p)[i];
}
for(int i=0;i<n;i++){
    printf("%d",a[i]);
}
return 0;
}