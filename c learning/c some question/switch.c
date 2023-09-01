#include <stdio.h>

int main(){
int day;
scanf("%d",&day);
switch(day)
{
case 1: 
printf("sunday");
break;
case 2: 
printf("monday");
break;
case 3: 
printf("tuesday");
break;
case 4: 
printf("wedenseday");
break;
case 5: 
printf("thrusday");
break;
case 6: 
printf("friday");
break;
case 7: 
printf("saturday");
break;
default :
printf(" you write between 1 and 7");


}


return 0;
}