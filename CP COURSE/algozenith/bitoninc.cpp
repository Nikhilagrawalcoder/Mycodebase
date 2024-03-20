#include <bits/stdc++.h>
using namespace std;
bool check(int mid,int arr[])
{
    if(arr[mid]>arr[mid-1])
    return true;
    return false;
}
int main()
{    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int low=1;
    int high=n-1;
    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(check(mid,arr)){
            low=mid+1;
ans=mid;
        }
        else{
            ;
        }
    }
    cout<<ans<<endl;
    return 0;
}