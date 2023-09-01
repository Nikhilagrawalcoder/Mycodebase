#include <stdio.h>
#include <math.h>
int main()
{
    float p,  n;
    float r ,A;

    printf("enter the value of p");
    scanf("%f", &p);
    
    printf("enter the value of r");
    scanf("%f", &r);

    printf("enter the value of n");
    scanf("%f", &n);
    A= p*pow(1+r/100,n);
    printf(" ci=%f",A-p);
    return 0;
}