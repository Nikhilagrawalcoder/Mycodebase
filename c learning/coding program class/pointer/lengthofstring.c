#include <stdio.h>
#include<string.h>
int main(){
char a[100];
gets(a);
char *p;
p = &a;
int k = strlen(p);
printf("%d",k);
return 0;
}