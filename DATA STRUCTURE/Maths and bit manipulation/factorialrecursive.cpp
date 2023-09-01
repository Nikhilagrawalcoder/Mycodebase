#include <bits/stdc++.h>
using namespace std;
long long int fact(int n){
    if(n==0|| n==1)
    return 1;
    return fact(n-1)*n;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   long long  int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}