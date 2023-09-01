#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
int n,h;
cin>>n>>h;
vector<int>v;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
int sum=0;
for(auto i:v){
    if(i<=h)
    sum=sum+1;
    else
    sum=sum+2;
}
cout<<sum;

    return 0;
}