#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
bool flag=true;
for(int i=0;i<n-1;i++){
if(a[i]>a[i+1]){
flag=false;
break;}

}
if(flag)
cout<<"yes";
else
cout<<"no";

return 0;
}

