#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
  cin>>a[i];
}
// int k=*max_element(a,a+n);
// int b[k+1]={0};
// for(int i=0;i<n;i++)
// b[a[i]]++;

// for(int i=0;i<=k;i++){
//   if(b[i]==0)
//   continue;
//   else{
//     cout<<i<<" "<<b[i]<<endl;
//   }
// }



int c=1;
for(int i=0;i<n-1;i++){
  if(a[i]==a[i+1])
c++;
else{
  cout<<a[i]<<c;
  c=1;
}
}


return 0;
}

