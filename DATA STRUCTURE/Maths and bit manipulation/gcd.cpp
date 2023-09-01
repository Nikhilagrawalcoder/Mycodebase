#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int gcd=1;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 and b%i==0)
        gcd=i;
    }
    cout<<gcd;
    return 0;
}