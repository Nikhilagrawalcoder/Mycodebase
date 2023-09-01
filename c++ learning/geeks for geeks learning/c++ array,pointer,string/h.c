#include <stdio.h>

int main(void) {
    int n,temp,c=0,i=0,p1,p2;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            p1=a[i];
            p2=b[i];
            c++;
        }
        else
        {
            c2++;
        }
    }
    if(c==2)
    {
        printf("yes\n");
        printf("%d %d",p2,p1);
    }
    else
    {
        printf("no");
    }
    elif(c2==n)
    {
        printf("yes\n");
        printf("%d %d",a[i],a[i]);
    }
	return 0;
}