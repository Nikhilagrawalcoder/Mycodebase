#include<bits/stdc++.h>
#define ll long long
using namespace std;
// int k(int j){
//     if(j%2)
//     {
//         // cout<<(j*3)+1<<" ";
//         return (j*3)+1;
//     }
    
//         //cout<<j/2<<" ";
//         return j/2;
// }
int main(){
ll int n;
cin>>n;
cout<<n<<" ";
 while (n>1){
if(n&1){
    n=(n*3)+1;
}
else{
    n>>=1;
    
}
cout<<n<<" ";
}

return 0;
}