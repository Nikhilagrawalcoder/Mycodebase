#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,i,j,n,d,min,max=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&d);
        for(j=1;j<=d;j++)
        {
            scanf("%d ",&n);
            if(j==1)
                    min=n;
            if(n>max)
                max=n;
                    if(n<min)
                        min=n;
        }
        printf("Min=%d Max=%d\n",min,max);
            max=0;
    }
    return 0;
}