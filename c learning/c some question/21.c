#include <stdio.h>

int main(){
int n;
scanf("%d",&n);
int c= n%2;
switch(c){
case 1:
printf("odd");
break;
case 0:
printf("even");
break;}
return 0;
}