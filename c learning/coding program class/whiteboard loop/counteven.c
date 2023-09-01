#include <stdio.h>

int main(){
int n,c=0,d=0;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    int a;
    scanf("%d",&a);
    
    if(a%2==0){
        c=c+1;
    }
    else
    d=d+1;
}
printf("no of even is %d and odd is %d",c,d);
return 0;
}