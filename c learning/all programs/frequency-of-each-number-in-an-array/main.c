#include<stdio.h>

int main()
{ int n;
    scanf("%d",&n);
    int a[n];
    int d=0;
    int c=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int f=0;
    int e=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
        f++;
        e=1;
        }
        
    }
    if(e==1)
    printf("%d=%d\n",0,f);
    
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<n;j++)
    {
        if(a[i]==a[j])
        {
        c++;
        d=a[i];
        if(i!=j)
        a[j]=0;
        
        }

    }
    if(a[i]!=0)
    printf("%d=%d\n",d,c);
    c=0;
    d=0;
    }





}