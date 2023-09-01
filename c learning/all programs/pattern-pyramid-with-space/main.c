/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=5;i++){
    for(k=5;k>=(i+1);k--){
        printf(" ");}
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
