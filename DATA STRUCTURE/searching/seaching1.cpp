#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int target;
cin>>target;
int k=-1;
for(int i=0;i<n;i++){
    if(a[i]==target){
    k=i;
    break;}
}
cout<<k<<endl;
return 0;
}

