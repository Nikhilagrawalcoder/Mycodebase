#include <stdio.h>

int main(){
int a,b;
scanf("%d %d",&a,&b);
if(a>b)
printf("a is maximum ");
else if(a<b)
printf("b is maximum");
else
printf("a and b are equal");
return 0;
}