#include<bits/stdc++.h>
using namespace std;
int find(int a[],int key,int i){
    if(i==-1)
    return -1;
    if(a[i]==key)
    return i;
    return find(a,key,i-1);}
int main(){

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int key;
cin>>key;
int i=n-1;
cout<<find(a,key,i);
return 0;
}