#include<iostream>
#include<cmath>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int s,w1,w2,w3;
    cin>>s>>w1>>w2>>w3;
    int j=w1+w2+w3;
    
    cout<<floor(j/s)<<endl;
}
return 0;
}