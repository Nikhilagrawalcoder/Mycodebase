#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;

for(int i=0;i<s.length();i++){
    char ch=tolower(s[i]);
    if(s[i]=='A' or s[i]=='E' or s[i]=='O' or s[i]=='I' or s[i]=='U' or s[i]=='a' or s[i]=='e'  or s[i]=='u' or s[i]=='i' or s[i]=='o' or s[i]=='Y' or s[i]=='y')
continue;
else
{
cout<<"."<<ch;


}

}

return 0;
} 