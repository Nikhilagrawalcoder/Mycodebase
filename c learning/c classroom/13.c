#include <stdio.h>

int main()
{
int a,b;
printf("enter a ");
scanf("%d",&a);
printf("enter b");
scanf(
    "%d",&b
);
int quotient;
quotient=a/b;


int remainder;
remainder=a%b;
printf("the value of quotient and reminder is %d,%d",quotient,remainder);
    return 0;
}