#include<bits/stdc++.h>
using namespace std;
int search(int a[],int k,int n,int i){
   
    if(i==n)
    return -1;
    else{
        if(a[i]==k)
        return i;
    }
    return search(a,k,n,i+1);
}
int main(){

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    }
int k;
cin>>k;
int i=0;
cout<<search(a,k,n,i);
return 0;
}

