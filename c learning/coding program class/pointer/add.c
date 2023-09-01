#include <stdio.h>

int main(){
int a,b;
scanf("%d %d",&a,&b);
int *p,*w;
 p= &a;
w= &b;
printf("%d",*p+*w);
return 0;
}