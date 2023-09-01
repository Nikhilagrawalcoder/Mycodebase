#include <stdio.h>

int main(){
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int c=0;
int d=0;
for(int i=0;i<n;i++){
    if(a[i]%2==0)
    c=c+1;
    else
    d=d+1;
}
printf("odd= %d,even=%d",d,c);
return 0;
}