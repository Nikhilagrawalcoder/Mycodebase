#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
int t;
cin>>t;
while(t--){
     
     long long  n;
     cin>>n;
vector<int>v;
     for(int i=0;i<n;i++)
     {
       int x;
       cin>>x;
       v.push_back(x);
        
     }
     int min=v[0];
     for(int i=1;i<n;i++)
     {
        min=min&v[i];
     }
    cout<<min<<endl;
   








}
    return 0;
}