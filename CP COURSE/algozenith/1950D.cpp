#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PB push_back
#define MP make_pair
const int N = 0;
vector<int> v;
bool binarynot(int n)
{
	while(n>0)
	{
		if(n%10 == 0 || n%10 == 1)
			{
				n = n/10;
			}
			else
				return false;
	}
	return true;
}

void solve()
{
	int n;
	cin >> n;
	for (int i = 0; i < v.size(); ++i)
	{
		if(v[i] == n)
		{
			cout << "YES\n";
			return;
		}
	}
	int c = n;
	for(int i=1;i < v.size();i++)
	{
		if(n%v[i]==0)
		{
			while(n%v[i]==0)
			{
				n = n/v[i];
			}
		}
		if(n==1)
		{
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
}

int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0);
	int t;
	cin >> t;
	for(int i=1;i<100002;i++)
	{
		if(binarynot(i))
		{
			v.PB(i);
		}
	}
	while(t--)
		solve();
	
}