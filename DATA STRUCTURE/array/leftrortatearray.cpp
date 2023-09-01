#include<bits/stdc++.h>
using namespace std;
void rotate(int a[],int n,int d){
    vector<int>v;
     for(int j=0;j<d;j++){
        v.push_back(a[j]);
    }
    for(int i=d;i<n;i++){
a[i-d]=a[i];
    }
   for(int i=d+1;i<n;i++){
    a[i]=v[i-d-1];
   }
   
}





int main(){

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int d;
cin>>d;
rotate(a,n,d);
for(int i=0;i<n;i++)
cout<<a[i];

return 0;
}

