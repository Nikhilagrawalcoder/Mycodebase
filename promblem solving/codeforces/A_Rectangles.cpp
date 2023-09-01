#include <bits/stdc++.h>
using namespace std;
#define  ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
ll n,m;
cin>>n>>m;
ll a[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
}
ll total=n*m;
// rows
for(int i=0;i<n;i++){
    for(int j=0;j<m-1;j++){
        for(int k=j+1;k<m;k++){
            if(a[i][j]==a[i][k])
            total++;
        }
    }
}
// columns
for(int i=0;i<m;i++){
    for(int j=0;j<n-1;j++){
        for(int k=j+1;k<n;k++){
            if(a[j][i]==a[k][i])
            total++;
        }
    }
}
cout<<total<<endl;

    return 0;
}