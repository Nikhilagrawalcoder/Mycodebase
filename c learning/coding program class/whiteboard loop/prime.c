#include <stdio.h>

int main(){
int n;
scanf("%d",&n);
int c=0;
for(int i=1;i<=n;i++){
    if(n%i==0){
        c=c+1;
    }
}
if(c<=2)
printf("it is prime no");
else
printf("it is non prime no");
return 0;
}