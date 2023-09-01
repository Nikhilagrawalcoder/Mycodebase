#include<bits/stdc++.h>
using namespace std;
#define ll long long
void remove(auto n,vector<ll>&v)
{
    if(n==v.begin())
    v.erase(v.begin());
    else if(n==v.end()-1)
    v.erase(v.end()-1);
    else{
        ll k = *(n-1)+*(n+1);
        *(n-1) =k;
        v.erase(n,n+1);
    }
}
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        vector<ll>v(n,0);
        for(ll i =0;i<n;i++)
        {cin>>v[i];}
        if(count(v.begin(),v.end(),v[0]) == v.size())
        {
            if(v[0]<0){
            cout<<v[0]<<endl;
            
            }

            else
            cout<<((v.size()+1)/2)*v[0]<<endl;
            continue;
        }
        while(v.size()!=1)
        {
            remove(min_element(v.begin(),v.end()),v);
            if(count(v.begin(),v.end(),v[0]) == v.size() and v.size()!=1)
            {
            if(v[0]<0){
            cout<<v[0]<<endl;}
            
            else
            cout<<((v.size()+1)/2)*v[0]<<endl;
            continue;
           }
        }
        cout<<v[0]<<endl;
    }
    return 0;
}