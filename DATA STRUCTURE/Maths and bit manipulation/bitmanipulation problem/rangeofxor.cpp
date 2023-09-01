#include <bits/stdc++.h>
using namespace std;
int xorof(int n){
    int k=(n-1)%4+1;
if(k==1)
return 1;
else if(k==3)
return 0;
else if(k==2)
return n+1;
else
return n;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
int l,r;
cin>>l>>r;
int e=xorof(l-1);
int j=xorof(r);
cout<<(e^j)<<endl;
    return 0;
}