#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int min;
if(a>=b)
min=b;
else
min=a;
int gcd;
for(int i=1;i<=min;i++){
if(a%i==0 && b%i==0)
gcd=i;
}
cout<<gcd<<endl;
cout<<(a*b)/gcd;
return 0;
}