#include <stdio.h>

int main(){
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int c=0,s=0;
for(int i=0;i<n;i++){
if(a[i]<0){
c=c+1;
s=s+a[i];
}
}
printf("count of negative element is %d and sum of all negative element in an array is%d",c,s);



return 0;
}