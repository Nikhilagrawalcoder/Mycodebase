#include<iostream>
using namespace std;

int main(){
int a,b;
cin>>a>>b;
int i=1;
while(true){
    a=3*a;
    b=2*b;
    if(a-b>0)
    break;
    else
    i++;

}
cout<<i;



return 0;
}