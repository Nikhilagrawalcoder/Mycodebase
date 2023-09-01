#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    if(((n-1)^n)==1)
    printf("Odd no.");
    else
    printf("Even no.");
}