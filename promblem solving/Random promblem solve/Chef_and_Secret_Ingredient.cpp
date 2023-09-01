#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int n,a;
cin>>n>>a;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
int c=0;
for(int i=0;i<n;i++){
    if(arr[i]>=a)
    c=c+1;
}
if(c>0)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;




}
return 0;
}