#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int c=0;
int f=1;
for(int i=2;i<=n;i++){
    if(n%i==0)
    c=c+1;
    if(c>=2){
    cout<<"NOT PRIme";
    f=0;
    break;
    }
}
if(f)
cout<<"PRIME";
return 0;
}