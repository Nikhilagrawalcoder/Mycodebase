#include<bits/stdc++.h>
using namespace std;
int find(int a[],int n,int key,int i){
    if(i==n)
    return -1;
    if(a[i]==key)
    return i;
    return find(a,n,key,i+1);}
int main(){

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int key;
cin>>key;
int i=0;
cout<<find(a,n,key,i);
return 0;
}

