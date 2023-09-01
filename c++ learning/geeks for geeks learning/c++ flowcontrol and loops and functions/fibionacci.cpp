#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int a=1,b=1,c;
for(int i=0;i<n;i++){
    if(i<=1)
    cout<<1<<" ";
    else
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}
return 0;
}