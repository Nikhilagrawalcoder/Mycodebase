#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    int sum1=(a)*(a+1)/2;
    int sum2=(b)*(b+1)/2;
    cout<<sum2-sum1+a<<endl;
}
return 0;
}