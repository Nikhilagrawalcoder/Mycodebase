#include <bits/stdc++.h>
using namespace std;
int search(int a[],int target,int low,int high){
    if(low<=high){
    int mid=(low+high)/2;
    if(a[mid]==target)
    return mid;
    else if(a[mid]>target){
        return search(a,target,low,mid-1);
    }
    else if(a[mid]<target){
        return search(a,target,mid+1,high);
    }
    
    
    }
    else
    return -1;
}
int main()
{   
    int a[5];
for (int i = 0; i < 5; i++)
{
    /* code */
    cin>>a[i];
}
int target;
cin>>target;
int low=0;
int high=5-1;
cout<<search(a,target,low,high);
    return 0;
}