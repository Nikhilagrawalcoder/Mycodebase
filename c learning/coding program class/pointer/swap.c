#include <stdio.h>

int main(){
int a,b;
scanf("%d %d",&a,&b);
int *p= &a;
int *q=&b;
int *temp;
temp=p;
p=q;
q= temp;
printf("%d %d",*p,*q);
return 0;
}

