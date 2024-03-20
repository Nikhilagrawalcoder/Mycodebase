#include <bits/stdc++.h>
using namespace std;
bool check(int mid,int arr[],int n){
    if(arr[mid]>=n)
    return true;
    return false;
}
int main()
{   
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int low=0;
    int high=n-1;
    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(check(mid,arr,target)){
            high=mid-1;
ans=mid;
        }
        else{
            low=mid+1;
        }
    }
    cout<<ans;
    return 0;
}