#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
for(int x:arr)
cin>>x;
for(int i=0;i<n;i++)
cout<<arr[i];

return 0;
}