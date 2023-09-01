#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
int c=0;
int max=-100;
while(t--){
    int a,b;
    cin>>a>>b;
c=c-a;
c=c+b;
if(c>max){
    max=c;
}

}
cout<<max<<endl;
return 0;
}