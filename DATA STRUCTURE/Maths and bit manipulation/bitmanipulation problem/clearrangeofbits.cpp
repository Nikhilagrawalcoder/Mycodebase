#include <bits/stdc++.h>
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
int n,i,j;
cin>>n>>i>>j;
cout<<rci(n,i,j)<<endl;
    return 0;
}