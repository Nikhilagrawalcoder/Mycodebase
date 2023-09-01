#include <bits/stdc++.h>
using namespace std;
// void ci(int (&n),int i){
//     int mask=(~0)<<i;
//     n=n|mask;
// }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n;
cin>>n;
int c=0;
while(n>0){
c+=(n&1);
n=n>>1;

}
cout<<c;
    return 0;
}