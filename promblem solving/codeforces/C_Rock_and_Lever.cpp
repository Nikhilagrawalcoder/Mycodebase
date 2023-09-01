#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
int c=0;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++)
    {
        if((v[i]&v[j])>=(v[i]^v[j]))
c++;
    }
}
cout<<c<<endl;

       }
    return 0;
}