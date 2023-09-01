#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
int t;
cin>>t;
while(t--){
     
     ll n;
     cin>>n;
     vector<ll>v;
     for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
     } 
     
     
    ll p=0;
    for(auto i:v)
    p=p+abs(i);
   
    ll j=0;
    int f=0;
    
  for(int i=0;i<n;i++){
    
   if(v[i]<0 and f==0)
   {
    j++;
    f=1;
   }
   else if(v[i]<=0 and f==1)
   continue;
   else
   f=0;
  }
cout<<p<<" "<<j<<endl;
     
     
     
      }
    return 0;
}