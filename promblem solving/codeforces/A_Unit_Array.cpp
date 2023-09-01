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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int c=0,d=0;
        c=c+count(a,a+n,1);
        d=d+count(a,a+n,-1);
    int j=0;
    while(c<d ){
    j++;
    c++;
    d--;}
    if(d%2!=0)
    j++;
  
    cout<<j<<endl;
    }
    return 0;
}