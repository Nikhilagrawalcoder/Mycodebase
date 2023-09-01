#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,r,s=0;
    scanf("%d",&n);
    while(n!=0)
    {
    r=n%10;
    s+=r;
    n=n/10;
    }
    printf("%d",s);
    return 0;
}
