#include<bits/stdc++.h>
using namespace std;
// int count(int n){
//     int j=0;
//     for(int i=0;i<32;i++){

//         if((n>>i)&1>=1)
//         j++;

//     }
//     return j;
// }
int main(){


int n;
cin>>n;
int c=0;
for(int i=1;i<=n;i++){
c=c+__builtin_popcount(i);
}
cout<<c;

return 0;
}

