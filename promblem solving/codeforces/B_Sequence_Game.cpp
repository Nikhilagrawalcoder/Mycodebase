#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  cin>>s;
  
  int ma=0;
  int c=1;
  for(int i=0;i<s.size()-1;i++){
      if(s[i]==s[i+1]){
          c++;
      }
      else{
          ma=max(c,ma);
          c=1;
      }1
  }
  ma=max(c,ma);
  cout<<ma;

    return 0;
}