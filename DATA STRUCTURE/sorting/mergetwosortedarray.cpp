#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int m;
cin>>m;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int b[m];
for(int i=0;i<m;i++)
cin>>b[i];
vector<int>v;
int i=0;
int j=0;
for(int k=0;k<m+n;k++){
    if(a[i]<=b[j]){
        v.push_back(a[i]);
        i++;
    }
    else{
        v.push_back(b[j]);
        j++;
    }
}
for(int i=0;i<v.size();i++)
cout<<v[i];


return 0;
}

