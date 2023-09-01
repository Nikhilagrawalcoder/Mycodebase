#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    ll N;
	    cin>>N;
	    ll n = N; 
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    ll Z = a[n-1]+a[n-2];
	    int b[a[n-1]+1] ={0};
	    for(int i=0;i<n;i++)
	    {
	        b[a[i]]++;
	    }
	    if(n<=2)
	    {
	        cout<<"NO\n";
	    }
	    else
	    {
	        if(a[n-1]==a[n-2])
	        {
	            if(n-b[a[n-1]]>=b[a[n-1]]-1)
	            cout<<"YES\n";
	            else
	            cout<<"NO\n";
	        }
	        else if(b[a[n-1]]+b[a[n-2]] == n)
	        cout<<"NO\n";
	        else
	        cout<<"YES\n";
	    }
	}
	return 0;
}