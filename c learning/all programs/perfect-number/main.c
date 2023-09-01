/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,sum=0;
    scanf("%d",&n);
        for(int i=1;i<=n/2;i++){
        if(n%i==0){
        sum+=i;}}
    if(sum==n)
    printf("Perfect number");
    else 
    printf("NOT");
    return 0;
}
