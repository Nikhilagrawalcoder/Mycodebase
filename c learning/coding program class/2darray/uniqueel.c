#include <stdio.h>
#include<limits.h>
int main()
{
    int n,i,max;
    scanf("%d",&n);
    int a[n],b[10000]={0};
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);}
        max=a[0];
        for(i=1;i<n;i++){
            if(max<a[i])
            max=a[i];
        }
    for(i=0;i<max+1;i++){
        b[a[i]++];
    }
    for(i=0;i<max+1;i++){
       if(b[i]==1)
       printf("%d",a[i]);
    }
    return 0;
}