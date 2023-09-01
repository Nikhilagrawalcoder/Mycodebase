#include <stdio.h>
void factorial(int n){
    int c=1;
    
for(int i=n;i;i--){
c=c*i;
}
printf("%d",c);
}
int main(){
int n;
scanf("%d",&n);
factorial(n);
return 0;
}