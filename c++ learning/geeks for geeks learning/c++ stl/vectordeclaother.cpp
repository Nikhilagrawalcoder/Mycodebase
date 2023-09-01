#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[]={10,20,30};
int n=sizeof(arr)/sizeof(arr[0]);
vector<int>v(arr,arr+n);
for(auto i=v.rbegin();i!=v.rend();i++){
    cout<<*i;
}
return 0;
}