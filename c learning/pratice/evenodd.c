#include <stdio.h>

int main(){
int n;
scanf("%d",&n);
if(n&1)
printf("%d is odd",n);
else
printf("%d is even ",n);
return 0;
}