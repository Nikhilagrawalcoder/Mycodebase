#include<bits/stdc++.h>
using namespace std;
int main(){
long long  a,b;
cin>>a>>b;
int total=a*b;
int c=0;
while(total!=0){
    total=total-(a-1)-(b-1)-1;
    a=a-1;
    b=b-1;
    c++;
}
if(c%2)
cout<<"Akshat";
else
cout<<"Malvika";


return 0;
}

