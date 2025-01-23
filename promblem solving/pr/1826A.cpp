#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PB push_back
#define MP make_pair
const int N = 0;

void solve()
{
	int n, m;
	cin >> n >> m;
	vector<vector<int>> a(n, vector<int>(m));
	for(int i=0;i<n;i++)
	{
		for(int j = 0;j<m;j++)
			cin >> a[i][j];
	}
	vector<vector<int>> b(n, vector<int>(m));
	for(int i=0;i<n;i++)
	{
		for(int j = 0;j<m;j++)
			cin >> b[i][j];
	}
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<m;j++)
	    	cout << a[i][j] << " ";
	    cout << "\n";
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