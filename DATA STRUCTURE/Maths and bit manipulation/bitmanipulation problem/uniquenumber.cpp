#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ans=0;
    int no;
    for(int i=0;i<n;i++){
        
        cin>>no;
        ans=ans^no;
    }
    
    
    cout<<ans;
    return 0;
}