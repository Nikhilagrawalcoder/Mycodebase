#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int a[n];
for (int i=0;i<n;i++)
cin>>a[i];
int f=1;
for(int i=0;i<n-1;i++){
if(a[i]>a[i+1])
{
    f=0;
    break;
}
}
if(f)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}