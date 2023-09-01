#include <stdio.h>

int main()
{
    int n,r;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("How many no. to be rotated : \n");
    scanf("%d",&r);
    for(int i=r;i<n;i++)
    printf("%d ",arr[i]);
    for(int i=0;i<r;i++)
    printf("%d ",arr[i]);

    return 0;
}