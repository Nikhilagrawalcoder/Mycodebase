#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int k=1;
    for(int i=1;i<=n;i++){
        k=k*i;
    }
    cout<<k;
    return 0;
}