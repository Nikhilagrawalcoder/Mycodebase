#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
int n;
cin>>n;
int k=(n-1)%4+1;
if(k==1)
cout<<1<<endl;
else if(k==3)
cout<<0<<endl;
else if(k==2)
cout<<n+1<<endl;
else
cout<<n<<endl;
return  0;
}