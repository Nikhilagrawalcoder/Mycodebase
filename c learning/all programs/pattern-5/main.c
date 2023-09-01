/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int i,j,k;
    for(i=5;i>=1;i--){
        for(k=i-1;k>=1;k--){
            printf(" ");}
         for(j=1;j<=9;j++){
             if(i==1||(i==2&&j==4)||(i==3&&j==3)||(i==4&&j==2))
                printf("*");
                else
                printf(" ");
        }
        printf("\n");
}
    return 0;
}