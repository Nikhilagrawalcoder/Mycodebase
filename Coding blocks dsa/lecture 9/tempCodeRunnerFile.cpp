#include<bits/stdc++.h>
using namespace std;
int main(){
int k,n;
cin>>k>>n;
int low=1;
int high=n;

while(low<=high){
    int mid=(low+high)/2;
    if(pow(mid,k)<=n){
low=mid+1;
    }
    else{
        high=mid-1;
    }
}
cout<<low;


return 0;
}

