#include<iostream>
#include<algorithm>
using namespace std;

int main(){
int arr[]={1,2,3,4,8};
sort(arr,arr+4);
for(int i=0;i<4;i++)
cout<<arr[i]<<endl;
if(binary_search(arr,arr+5,8))
cout<<"Yes";
else
cout<<"No";

return 0;
}