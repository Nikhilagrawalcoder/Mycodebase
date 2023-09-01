#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int c=0;
int b[100]={0};
for(int i=0;i<n;i++)
b[a[i]]++;
for(int i=0;i<100;i++)
{
    if(b[i]>0)
    c++;
}
cout<<c;
return 0;
}