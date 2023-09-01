/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,k,j,a=1;
    for(i=1;i<=3;i++){
        for(k=3;k>=(i+1);k--){
            printf("  ");
        }
        for(j=1;j<=a;j++){
        printf("* ");}
        a+=2;
        printf("\n");}
    return 0;
}
