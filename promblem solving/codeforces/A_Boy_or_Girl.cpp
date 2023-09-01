#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
int a[26]={0};
for(int i=0;i<s.length();i++){
    a[int(s[i])-97]++;
}
int c=0;
for(int i=0;i<26;i++){
    if(a[i]!=0)
    c++;
}
if(c%2)
cout<<"IGNORE HIM!"<<endl;
else
cout<<"CHAT WITH HER!"<<endl;
return 0;
}