#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,r,N,s=0;
    scanf("%d",&n);
    N=n;
    while(n>0){
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(s==N)
        printf("Palindrome.");
    else 
        printf("Not Palindrome.");
    return 0;
}
