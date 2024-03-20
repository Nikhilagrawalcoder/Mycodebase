#include <bits/stdc++.h>
using namespace std;

int maxsum(int a[],int n,int k){
int sum=0;
int ans=0;
for(int i=0;i<k;i++)
sum=sum+a[i];
ans=sum;
for(int i=k;i<n;i++){
    sum=sum+a[i]-a[i-k];
    ans=max(sum,ans);
}
return ans;
}
int main()
{   

    int n;
    cin>>n;
    int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int k;
cin>>k;
int ma=maxsum(a,n,k);
cout<<ma<<endl;
    return 0;
}