#include <stdio.h>

int main(){
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int max=a[0];
int min= a[0];
for(int i=1;i<n;i++){
    if(a[i]<min)
    min= a[i];
}
for(int i=0;i<n;i++){
    if(a[i]>max)
    max= a[i];
}
printf("max=%d and min=%d",max,min);
return 0;
}