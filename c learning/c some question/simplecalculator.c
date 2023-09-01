#include <stdio.h>
#include<math.h>
int main(){



int a,b ,i;
char c;
printf("enter the value of a and b and write operator c also\n ");
scanf("%d %c %d",&a,&c,&b);
float d = a;
float e =b;
 i =c;
 switch(i){
 case '+':printf("%d\n",a+b);
 break;
  case '-':printf("%d\n",a-b);
  break;
  case '*':printf("%d\n",a*b);
  break;
  case '%':printf("%f\n",fmod(a,b));
  break;

  case '/':printf("%.2f\n",d/e);
  break;
     

 }


return 0;
}