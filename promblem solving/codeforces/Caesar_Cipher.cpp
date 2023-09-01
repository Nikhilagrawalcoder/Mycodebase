#include <iostream>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	ll q;cin>>q;
	while(q--)
	{
	    ll n;cin>>n;
	    string s,t,u;cin>>s>>t>>u;
	    int change = (t[0])-(s[0]);
	    s.clear();
	    for(int i =0;i<u.size();i++)
	    {
	        s.push_back((((u[i]-97)+change)%26)+97);
	    }
	    cout<<s<<endl;
	    
	    
	}
	return 0;
}