#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
 int t;
 cin>>t;

 while(t--){

  string s;
  cin>>s;
  int n = s.size();
  map<char,int> ar;
  for(int i = 0;i < n/2;i++){
     ar[s[i]]++;
  }

  if(ar.size()>=2) cout << "YES" << endl;
  else cout << "NO" << endl;

 }
}