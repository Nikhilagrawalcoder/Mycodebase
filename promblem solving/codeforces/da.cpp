#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
int a,b,c;
cin>>a>>b>>c;
int k=1;
for(int i=2;i<c;i++){
    if(a%i==b%i and b%i==c%i)
    k=i;

}

cout<<k<<endl;
    return 0;
}