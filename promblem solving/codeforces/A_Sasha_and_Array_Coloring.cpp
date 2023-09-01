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
    
    sort(v.begin(),v.end());
    int total=0;
    for(int i=0;i<n/2;i++){
total=total+abs(v[i]-v[n-i-1]);
    }
    
    
    cout<<total<<endl;
    
     }
    return 0;
}