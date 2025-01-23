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
	vector<vector<char>> a(n, vector<char>(m));
	for(int i=0;i<n;i++)
	{
		for(int j = 0;j<m;j++)
			cin >> a[i][j];
	}
	vector<vector<char>> b(n, vector<char>(m));
	for(int i=0;i<n;i++)
	{
		for(int j = 0;j<m;j++)
			cin >> b[i][j];
	}
	// for(int i=0;i<n;i++)
	// {
	//     for(int j=0;j<m;j++)
	//     	cout << a[i][j] << " ";
	//     cout << "\n";
	// }
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<m-1;j++)
		{
			if(a[i][j] != b[i][j])
			{
				int k = b[i][j] - a[i][j];
				if(k < 0)
			    	k+=3;
				a[i][j] = (a[i][j] + k)%3;
				a[i+1][j+1] = (a[i+1][j+1] + k)%3;
				a[i+1][j] = (a[i+1][j] + (3-k))%3;
				a[i][j+1] = (a[i][j+1]+ (3-k))%3;
			}
		}
		if(a[i][m-1] != b[i][m-1])
		{
			cout << "NO\n";
			return;
		}
	}
	// for(int i=0;i<n;i++)
	// {
	//     for(int j=0;j<m;j++)
	//     	cout << a[i][j] << " ";
	//     cout << "\n";
	// }
	for(int i=0;i<m;i++)
	{
		if(a[n-1][i] != b[n-1][i])
		{
			cout << "NO\n";
			return;
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