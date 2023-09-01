#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
ll fact(ll n){
ll f=1;
for(int i=n;i>0;--i)
f=f*i;
return f;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
// 
ll n,m;
cin>>n>>m;
ll k=n-m+1;
ll max0=(k*(k-1))/2;
// for min
ll min1;

// if(m==1)
// min=max;
// else{
//     if((n-m)/m==1)
//     min=m;
//     else if(n-m<m)
//     min=n-m;
//     else if((n-m)%m==0)
//     min=2*fact(n/2)/(fact(2)*fact(n/2-2));
// }
if(m==n)
ll min=0;
else{

            min1 = ((n/m)*(n/m-1))/2;
            min1*= m-(n%m);
            min1+= (((n/m)*(n/m+1))/2)*(n%m);
        
}
cout<<min1<<" "<<max0;
    return 0;
}