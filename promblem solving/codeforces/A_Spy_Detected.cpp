#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
        for(int i=0;i<n;i++){
        if(count(v.begin(),v.end(),v[i])==1){
c=i;
break;
        }
        }
        cout<<c+1<<endl;
    }
    return 0;
}