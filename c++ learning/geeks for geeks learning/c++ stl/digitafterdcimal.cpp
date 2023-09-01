#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
int k=s.find(".");
if(k!=string::npos){
for(int i=k+1;i<s.length();i++)
cout<<s[i];}
return 0;
}