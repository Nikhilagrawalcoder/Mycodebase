#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
getline(cin,s);
string s1;
getline(cin,s1);
int pos=s.find(s1);
while(pos!=string::npos){
    cout<<pos<<" ";
    pos=s.find(s1,pos+1);
}
return 0;
}