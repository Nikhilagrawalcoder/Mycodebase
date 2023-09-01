#include<stdio.h>

void main()
{
    int P,R,T;
    float SI;
    printf("Enter principal amount\n");
    scanf("%d",&P);
    printf("Enter Time in years\n");
    scanf("%d",&T);
    printf("Enter rate in percentage\n");
    scanf("%d",&R);
    SI=P*R*T/100.0;
    printf("Simple Interest %f",SI);
    
}
