#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
    }
    sort(v.begin(),v.end());
    
    return 0;
}