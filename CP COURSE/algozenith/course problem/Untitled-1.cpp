#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
   ll t;cin>>t;
   while(t--)
   {
         ll n;cin>>n;
         ll prod = 1;
         ll max1 = 0;
         for(int i =0;i<n;i++)
         {
            ll k;cin>>k;
            prod= prod*k;
            max1 = max(max1,k);
         }
         
         ll start =1,end = 1e15;
         ll ans = -1;
         while(start<=end)
         {
            ll mid = (start +end)/2;
            if(pow(mid,n)>=prod)
            {
               ans = mid;
               end = mid-1;
            }
            else
            {
               start = start+1;
            }
         }
         cout<<ans<<endl;
   }
   return 0;
}