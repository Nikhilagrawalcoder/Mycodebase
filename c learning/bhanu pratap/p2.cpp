#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
   
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n;i++)
    {
        int current  = a[i];
        int j =i;
        while(j>=1&&(a[j-1]>current))
        {
            a[j] = a[j-1];
            j--;
        }
        a[j] = current;
        
    }
    for(auto x:a)
    cout<<x<<" ";
    cout<<endl;
    int count =0;
    int max =0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1] == a[i]+1)
        count++;
        else
        {
            if(count>max)
            max = count + 1;
            count =0;
        }
    }
    count =0;
    for(int i= n-1;i>=0;i--)
    {
       
        if(a[i]-1 != a[i-1])
        {
           if(count>max)
           max =count;
           break;
        }
         count++;
    }
    cout<<max<<endl;
    return 0;
}