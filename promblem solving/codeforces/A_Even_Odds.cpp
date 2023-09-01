#include<bits/stdc++.h>
using namespace std;

int main(){
long long  a,b;
cin>>a>>b;
long long  p;
if(a%2==0)
p=(a/2)+1;
else
p=(a/2)+2;
if(b<p){
    cout<<2*b-1;
}
else{
    long long  r=b+1-p;
    cout<<2*r;
}
return 0;
}