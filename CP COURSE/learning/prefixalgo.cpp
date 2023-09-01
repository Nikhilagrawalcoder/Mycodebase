#include <bits/stdc++.h>
using namespace std;
int main()
{

int n;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
int q;
cin>>q;
while(q--){
int l,r,x;
cin>>l>>r>>x;
for(int i=l;i<=r;i++){
    v[i]=v[i]+x;
}




}
for(auto i:v)
cout<<i<<" ";



    return 0;
}
