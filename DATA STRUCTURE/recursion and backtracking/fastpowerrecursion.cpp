#include<bits/stdc++.h>
using namespace std;

int power(int a,int n){

if(n==0){
    return 1;
}
return a*power(a,n-1);
}
int fastpower(int a,int n){
    if(n==0)
    return 1;
  int smallerans=fastpower(a,n/2);
  smallerans*=smallerans;
  if(n%2)
  return smallerans*a;
  return smallerans;
}


int main(){

int a,n;
cin>>a>>n;
cout<<power(a,n);
cout<<fastpower(a,n);

return 0;
}

