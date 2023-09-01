#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i=0,a=0,b=1,c;
        scanf("%d",&n);
        while(i<n){
                if(i<=1)
                {
                        c=i;
                }
                else{
                        c=a+b;
                        a=b;
                        b=c;
                }
                printf("%d ",c);
                i++;
        }
    return 0;
}