#include <bits/stdc++.h>
#define ll long long  ;
using namespace std;
int rci(int n,int i,int j){
    int a=((~0)<<j+1);
    int b=(1<<i)-1;
    int mask=a|b;
    return n&mask;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long long n,m,i,j;
cin>>n>>m>>i>>j;
long long  l=rci(n,i,j);
long long  k=m<<i;
cout<<(l|k);
    return 0;
}