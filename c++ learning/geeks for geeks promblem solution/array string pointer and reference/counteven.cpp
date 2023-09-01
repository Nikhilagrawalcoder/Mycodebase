#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int even=0;
int odd=0;
for(int i=0;i<n;i++){
    if(a[i]%2)
    odd++;
    else
    even++;
}
cout<<odd<<even;
return 0;
}