/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a=0,b=1,c,n;
    scanf("%d",&n);
    printf("%d,%d,",a,b);
    for(int i=1;i<=n-2;i++){
    c=a+b;
    printf("%d,",c);
    a=b;b=c;
    }
    return 0;
}
