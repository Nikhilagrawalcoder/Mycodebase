#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
  cin>>a[i];
}
int ma=a[0];
int res=a[0];

for(int i=1;i<n;i++){
    ma=max(ma+a[i],a[i]);
    res=max(ma,res);

}
cout<<res;


return 0;
}

