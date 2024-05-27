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
	int arr[n];
	int sum = 0;
	for(int i=0;i<n;i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	int ans = 0;
	int temp = 0;
	int mx = -1;
	for(int i=0;i<n-1;i++)
	{
		temp += arr[i];
		sum -= arr[i];
		ans = __gcd(temp, sum);
		mx = max(ans, mx);
	}
	cout << mx << "\n";
}

int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();
	
}