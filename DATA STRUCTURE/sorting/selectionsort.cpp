#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int temp[n];
for(int i=0;i<n;i++){
    
    int index=0;
    for(int j=1;j<n;j++){
if(a[index]>a[j])

index=j;
    }
    temp[i]=a[index];
    a[index]=INT_MAX;

    
    
}
for(int i=0;i<n;i++)
cout<<temp[i];

return 0;
}

