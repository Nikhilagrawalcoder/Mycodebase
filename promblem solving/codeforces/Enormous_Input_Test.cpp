#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
   cin.tie(NULL);
int n,k;
cin>>n>>k;
int c=0;
for(int i=0;i<n;++i)
{
    int a;
    cin>>a;
    if(a%k==0)
    ++c;
}
cout<<c;
return 0;
}