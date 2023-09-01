#include <stdio.h>

int main(){
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int b,f=0,k;
scanf("%d",&b);
for(int i=0;i<n;i++){
    if(a[i]==b){

    
    f=1;
   k=i;
   break;
    }
}
if(f)
printf("%d",k);
else
printf("NOt found\n");
return 0;
}