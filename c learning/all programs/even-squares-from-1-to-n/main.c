/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=sqrt(n);i++){
        if((i*i)%2==0)
        printf("%d ,",(i*i));
    }
    return 0;
}
