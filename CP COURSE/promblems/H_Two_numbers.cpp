#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
int a,b;
cin>>a>>b;
int c=a/b;
int d=int(ceil(a/b));
int e=int(round(a/b));
cout<<"floor "<<a <<" / "<<b<<" = "<<c<<endl;;
cout<<"ceil "<<a<<" / "<<b<<" = "<<d<<endl;
cout<<"round "<<a<<" / "<<b<<" = "<<e<<endl;

return 0;
}