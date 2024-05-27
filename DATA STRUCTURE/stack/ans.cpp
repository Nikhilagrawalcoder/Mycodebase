#include <bits/stdc++.h>
using namespace std;

int main()
{   stack<char>v;

for(int i=0;i<s.size();i++){
    if(s[i]=='(' or s[i]=='{' or s[i]=='[')
    {
        v.push(s[i]);
    }
    else{
        if(v.top()=='(' && s[i]==')')
        {
            v.pop();
        }
        else if(v.top()=='{' && s[i]=='}')
        {
            v.pop();
        }
         else if(v.top()=='[' && s[i]==']')
        {
            v.pop();
        }
        else
        return false;
    }
    
}
if(v.size()!=0)
return false;
return true;


    return 0;
}