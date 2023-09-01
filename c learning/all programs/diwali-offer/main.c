#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a[3];
    int b[3];
    for(int i=0;i<3;i++)
    {
    scanf("%d",&a[i]);
        
    }
    for(int i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    int l=0;
    int l1=0;
    int s=b[0];
    int s1=0;
    
     int  l2=0;
    int s2=a[0];
    int l3=0;
    int s3=0;
    int m=0;
    for(int i=0;i<3;i++)
    {
        if(b[i]>l)
        {
            l=b[i];
          l1=i;
        }
        if(s>b[i])
        {
            s1=i;
            s=b[i];
        }
        if(a[i]>l2)
        {
            l3=i;
            l2=a[i];
        }
        if(s2>a[i])
        {
            s2=a[i];
            s3=i;
        }
       
    }
    int m1=0;
    for(int i=0;i<3;i++)
    {
        if(l1!=i&&s1!=i)
        m1=i;
         if(l3!=i&&s3!=i)
        {
            m=i;

        }
            
    }
  
        for(int j=0;j<3;j++)
        {
            if(j==l1)
            printf("%d",l3+1);
            if(j==s1)
            printf("%d",s3+1);
            if(j==m1)
            printf("%d",m+1);
            
            
         }
   
   
    return 0;
}