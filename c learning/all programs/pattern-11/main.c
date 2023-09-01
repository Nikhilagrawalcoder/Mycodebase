/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j,k,a=1;;
    for(i=5;i>=1;i--){
        for(k=i-1;k>=1;k--){
            printf(" ");}
            for(j=1;j<=a;j++){
            printf("*");
        }
        a++;
        printf("\n");
}
    return 0;
}
