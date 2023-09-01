#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    int f=0;
   while(n){
   n=n/3;
   n=2*n;
if(n==m)
   {
    f=1;
    break;
   }
   else{
    continue;
   }
   }
   if(f){
    cout<<"YES"<<endl;
   }
   else
   cout<<"NO"<<endl;
}
return 0;
}