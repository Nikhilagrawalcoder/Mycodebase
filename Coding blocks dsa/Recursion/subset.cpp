#include <bits/stdc++.h>
using namespace std;
void print(vector<char>s,vector<char>v){
if(v.size()==0)
{
    for(int i=0;i<s.size();i++)
    
    cout<<s[i]<<" ";
    cout<<endl;
}
char c=v.pop_back();
v.pop_back();
print(s,v);
s.push_back(c);
print(s,v);

    
}
int main()
{   

vector<char>v={'a','b','c'};
vector<char>s={};
cout<<1;

    return 0;
}