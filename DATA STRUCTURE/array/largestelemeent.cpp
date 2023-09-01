#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int k1=0,k2=-1;
for(int i=1;i<n;i++){
    if(a[k1]<a[i]){
        k2=k1;
        k1=i;
    }
    else if(a[k1]!=a[i]){
        if(k2=-1||a[k2]<a[i])
         k2=i;
    }
   
}
cout<<k2;


return 0;
}

