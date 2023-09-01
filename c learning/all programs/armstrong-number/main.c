#include<stdio.h>
#include<math.h>
void main()
{
    int n,L,r,num,sum=0;
    scanf("%d",&n);
    num=n;
    L=log10(n)+1;
    while(n>0){
        r=n%10;
        sum+=pow(r,L);
        n=n/10;
    }
    if(sum==num)
    printf("Armstrong number");
    else
    printf("NOT");
    }
    
