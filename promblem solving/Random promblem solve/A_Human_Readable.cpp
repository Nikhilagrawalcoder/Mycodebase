#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int j=1024*1024;
    if(n/j>=1)
    {
        n=n-(n%j);
        cout<<n/j<<"MiB"<<endl;
    }
    else if((n/1024)>=1)
    {
        n=n-(n%1024);
        cout<<(n/j)+1<<"KiB"<<endl;
    }
    else
    cout<<n<<"B"<<endl;
}
return 0;
}