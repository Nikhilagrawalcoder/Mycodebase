#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
string j;
for(int i=0;i<s.size();i++){
if(s[i]=='-' and s[i+1]=='-'){
j=j+'2';
i++;
}

else if(s[i]=='-' and s[i+1]=='.')
{
    j=j+'1';
    i++;
}
else
j=j+'0';
}
cout<<j;
return 0;
}