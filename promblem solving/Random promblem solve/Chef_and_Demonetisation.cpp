#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int s,n;
cin>>s>>n;
int x=s;
int c=0;
int j;
if(s%2!=0){
    c=c+1;
    s=s-1;}
while(s){
c=c+(s/n);
if(s<n){
    c=c+1;
    break;
}

 


    
s=s%n;}

cout<<c<<endl;


}
return 0;
}