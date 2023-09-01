#include <stdio.h>
void fibbonacci(int );
int main()
{
    int n;
    scanf("%d",&n);
    fibbonacci(n);
    return 0;
}
void fibbonacci(int n)
{
    int a=0,b=1,c,i;
    for(i=1;i<=n-2;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("nth term of fibbonacci =%d",c);
}
