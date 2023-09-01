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
  int k=n-1;
  int ans=n;
  while(ans&k){
    ans=ans&k;
    --k;
  }  
  cout<<k<<endl;   }
    return 0;
}