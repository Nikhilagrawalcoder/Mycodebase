
#include<stdio.h>
void main()
{
   float temp,sum;
   printf("Enter temperature in Fahrenheit: \n");
   scanf("%f",&temp);
   sum=temp-32;
   printf("Temperature in Celsius: %f \n", 5/9*sum);
}