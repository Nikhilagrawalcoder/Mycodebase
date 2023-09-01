#include<bits/stdc++.h>
using namespace std;

int main(){
int n,t;
cin>>n>>t;
int a[n],b[n];
for(int i=0;i<n;i++)
cin>>a[i];
for(int j=0;j<n;j++)
cin>>b[j];
int max=-200;
int count=0;
for(int i=0,j=0;i<n;i++,j++){
    if(a[i]==t){
       if(max<b[j]){
        max=b[j];
        count=i+1;
       }
    }
}
if(count==0)
cout<<1;
else
cout<<count;
return 0;
}