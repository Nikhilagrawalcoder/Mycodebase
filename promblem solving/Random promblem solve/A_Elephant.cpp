#include<iostream>
using namespace std;

int main(){
long long n;
cin>>n;
if(n%5==0){
    cout<<n/5;
}
else if(n%4==0){
    cout<<n/4;
}
else if(n%3==0)
cout<<n/3;
else if(n%2==0)
cout<<n/2;
else
cout<<n;
return 0;
}