#include <stdio.h>

int main(){
int n;
scanf("%d",&n);
int a[n],b[n],c[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<n;i++){
    if(a[i]%2==0)
    b[i]=a[i];
    else
    b[i]=0;
}
for(int i=0;i<n;i++){
if(a[i]%2==0)
c[i]=0;
else
c[i]=a[i];
}
for(int i=0;i<n;i++){
    if(b[i]!=0){
        printf("even");
    printf("%d",b[i]);
}
}
printf("\n");
for(int i=0;i<n;i++){
    if(c[i]!=0){
        printf("odd");
    printf("%d",c[i]);
}}

return 0;
}