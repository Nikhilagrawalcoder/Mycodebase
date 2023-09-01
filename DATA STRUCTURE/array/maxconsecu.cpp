#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
bool a[n];
for(int i=0;i<n;i++)
cin>>a[i];

int ma=0;
int c=0;
for(int i=0;i<n;i++){
if(a[i]==1){
    c=c+1;
}
 
else{
    ma=max(ma,c);
    c=0;
}
if(i==n-1)
ma=max(ma,c);
}

cout<<ma;

return 0;
}


