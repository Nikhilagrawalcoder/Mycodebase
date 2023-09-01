#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int c=0;
while(n>0){
    if((n%10)==4 or (n%10)==7)
    {
        c=1;
        break;
    }
    else
    n=n/10;
}
if(c)
cout<<"YES"<<"\n";
else
cout<<"NO"<<endl;
return 0;
}