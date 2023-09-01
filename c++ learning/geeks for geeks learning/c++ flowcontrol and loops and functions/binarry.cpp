#include<iostream>
#include<math.h>
using namespace std;

int main(){
int n;
cin>>n;
int val=0;
for(int i=0;n>0;i++){
int l=n%10;
val=val+l*pow(2,i);
n=n/10;
}
cout<<val;
return 0;
}