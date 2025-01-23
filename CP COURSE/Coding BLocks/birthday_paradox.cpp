#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n=0;
  float p=1.0;
  float e=365.0;
  float s;
  cin>>s;

  
  while(p>1-s){
p=p*(e/365);
e=e-1.0;
n=n+1;
// cout<<n<<" "<<p<<endl;
  }
  if (s == 1.0)
      cout << 366 << endl;
      else
  cout<<n;
    return 0;
}