#include<bits/stdc++.h>
using namespace std;

void find(int *a,int key,int n,int i){
if(a[i]==key){
    cout<<i<<" ";
}
if(i<n){
    find(a,key,n,i+1);
}
}





int main(){


int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int key;cin>>key;
int i=0;
find(a,key,n,i);

return 0;
}

