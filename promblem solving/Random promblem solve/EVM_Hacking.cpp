#include<iostream>
#include<algorithm>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int a,b,c,p,q,r;
    cin>>a>>b>>c>>p>>q>>r;
    int d[6]={a,b,c,p,q,r};
    sort(d,d+6);
    int e=d[1]+d[2]+d[5];
    int j=(d[3]+d[4]+d[5])/2;
    if(e>j)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

}
return 0;
}