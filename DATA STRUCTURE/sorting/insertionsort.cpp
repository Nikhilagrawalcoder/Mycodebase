#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];

for(int i=1;i<n;i++){
    int key=a[i];
    int l=i-1;
while(l>=0 && a[l]>key){
a[l+1]=a[l];
l--;
}
a[l+1]=key;
}
for(int i=0;i<n;i++)
cout<<a[i];


return 0;
}

