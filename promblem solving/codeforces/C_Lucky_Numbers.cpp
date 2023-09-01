#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
ll p(ll n){
    ll sum=1;
    for(int i=1;i<=n;i++){
        sum=2*sum;
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
ll t;
cin>>t;
ll sum=0;
for(int i=1;i<=t;i++){
    sum=sum+p(i);
}
cout<<sum;
    return 0;
}