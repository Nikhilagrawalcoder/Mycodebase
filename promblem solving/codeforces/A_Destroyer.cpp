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
        int a[n];
        int b[101]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++;
        }
        int c=0;
        for(int i=0;i<=*max_element(a,a+n);i++){
if(b[i-1]<b[i])
{
    c=1;
    break;
}
        }
        if(c)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
}