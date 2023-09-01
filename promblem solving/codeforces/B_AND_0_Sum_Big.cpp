#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=1000000007; 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
ll n,k;
cin>>n>>k;
ll ans=1;
for(ll i=0;i<k;i++){
    ans=(ans*n) % mod;
    
}


cout<<ans<<"\n";

       }
    return 0;
}