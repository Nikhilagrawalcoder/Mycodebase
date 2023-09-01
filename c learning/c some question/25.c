#include <stdio.h>

int main(){
int a;
scanf("%d",&a);
switch(a>0){
case 1:
printf("no is +");
break;
case 0:
switch(a==0){
case 1:
printf("no is 0");
break;

case 0:
printf("no is -");
break;}

}
return 0;
}