#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
int a[t],b[t],c[t];
for(int i=0;i<t;i++){
    cin>>a[i]>>b[i]>>c[i];
}
int d=0;
for(int i=0;i<t;i++){
if(a[i]==1 and b[i]==1 or a[i]==1 and c[i]==1 or c[i]==1 and b[i]==1)
d++;
}
cout<<d;
return 0;
}