#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PB push_back
#define MP make_pair
const int N = 0;

void solve()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int par[n] = {0};
	vector<char> even;
	vector<char> odd;
	for(int i=0;i<n;i++)
	{
		if(int(s[i] - 'a')%2)
		{
			par[i] = 1;
			odd.PB(s[i]);
		}
		else{
			even.PB(s[i]);
		}
	}
	sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
	for(int i=0;i<n;i++)
	{
		if(par[i])
		{
			cout << odd.front();
			odd.pop_front();
		}
		else{
			cout << even.front();
			even.pop_front();
		}
	}
	cout << "\n";
}

int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();
	
}