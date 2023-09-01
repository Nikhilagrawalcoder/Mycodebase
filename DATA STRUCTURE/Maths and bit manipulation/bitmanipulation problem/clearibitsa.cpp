#include <bits/stdc++.h>
using namespace std;
int cli(int n,int i){
    int mask=(~(0)<<i)&n;// here mask is only bracket wala
    return mask;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n,i;
cin>>n>>i;
cout<<cli(n,i)<<endl;
    return 0;
}