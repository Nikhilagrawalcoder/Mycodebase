#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

  int a,b;
  cin>>a>>b;
  int j=max(a,b);
  int c=0;
  for(int i=0;i<=j;i++){
    for(int k=0;k<=j;k++){
        if((i*i+k==a)and (i+k*k==b))
        c++;
    }
  }
  cout<<c;


    return 0;
}