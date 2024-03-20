#include<bits/stdc++.h>
using namespace std;
#define ll long long


ll checkmin(vector<vector<ll>>&v,int k,int i,int j)
{
    ll min1 = INT_MAX;
    for(int a = i;a<i+k;a++)
    {
        for(int b = j;b<j+k;b++)
        {
               min1 = min(min1,v[a][b]);
        } 
    }
    return min1;
}

int main()
{
    ll n,k;cin>>n>>k;
     vector<vector<ll>> v(n, vector<ll> (n, 0));
     for(int i =0;i<n;i++)
     {
        for(int j =0;j<n;j++)
        {
            cin>>v[i][j];
        }
     }
     ll max1 = INT_MIN;
     for(int i = 0 ;i<=n-k;i++)
     {
          for(int j = 0;j<=n-k;j++)
          {
             max1 = max(max1,checkmin(v,k,i,j));
          }
     }
     cout<<max1<<endl;
    return  0;
}