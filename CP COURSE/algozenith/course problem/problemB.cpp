#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
   ll t;cin>>t;
   while(t--)
   {
      ll a,b;cin>>a>>b;
      a+=b;
      cout<<a<<endl;
      string s = to_string(a);
      cout<<"ST"<<string(s.end()-2,s.end())<<endl;
   }
   return 0;
}