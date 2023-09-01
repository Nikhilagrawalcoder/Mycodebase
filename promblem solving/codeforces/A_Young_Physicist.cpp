#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int x[n],y[n],z[n];
for(int i=0;i<n;i++){
    cin>>x[i]>>y[i]>>z[i];
}
int a=0,b=0,c=0;
for(int i=0;i<n;i++){
    a=a+x[i];
    b=b+y[i];
    c=c+z[i];
}
if(a==0 and b==0 and c==0)
cout<<"YES"<<endl;
else
cout<<"NO"<<"\n";
return 0;
}