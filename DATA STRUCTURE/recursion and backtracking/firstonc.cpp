#include<bits/stdc++.h>
using namespace std;

int first(int a[],int n,int key){
    if(n==0)
    return -1;
    if(a[0]==key){
        return 0;
    }
    int i=first(a+1,n-1,key);
    if(i==-1)
    return -1;
    return i+1;
}




int main(){

int n;cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int key;
cin>>key;
cout<<first(a,n,key);
return 0;
}

