#include <bits/stdc++.h>

using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define min4(a, b, c, d) min(min(a, b), min(c, d))
#define max4(a, b, c, d) max(max(a, b), max(c, d))
#define mod(x, m) (((x % m) + m) % m)
#define prec(x) fixed << setprecision(x)

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#define cn cout << "NO\n";
#define cy cout << "YES\n";
#define ce cout << endl;
#define ss    \
    string s; \
    cin >> s;
#define sst      \
    string s, t; \
    cin >> s >> t;
#define lxy  \
    ll x, y; \
    cin >> x >> y;
#define llr  \
    ll l, r; \
    cin >> l >> r;
#define lab  \
    ll a, b; \
    cin >> a >> b;
#define labc    \
    ll a, b, c; \
    cin >> a >> b >> c;
#define labcd      \
    ll a, b, c, d; \
    cin >> a >> b >> c >> d;
#define ln \
    ll n;  \
    cin >> n;
#define lnm  \
    ll n, m; \
    cin >> n >> m;
#define lm \
    ll m;  \
    cin >> m;
#define vv vector<ll> v(n, 0)
#define vvp vector<pair<ll, ll>> v;
#define fl                      \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> v[i];            \
    }
#define lk \
    ll k;  \
    cin >> k;
#define pi pair<int, int>
#define pll pair<ll, ll>
#define vll vector<ll>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define tloop \
    int t;    \
    cin >> t; \
    while (t--)
#define is_even(x) ((x) % 2 == 0)
#define is_odd(x) ((x) % 2 != 0)
#define is_power_of_two(x) (x && !(x & (x - 1)))

// Debugging (use in offline environment)
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif
int min_o(const string &s, const string &j, int i, int k, vector<vector<int>> &v)
{
    if (s.size() == i)
    {
        return j.size() - k;
    }
    if (k == j.size())
    {
        return s.size() - i;
    }
    if (v[i][k] != -1)
        return v[i][k];

    if (s[i] == j[k])
        v[i][k] = min_o(s, j, i + 1, k + 1, v);

    else
    {
        int a = min_o(s, j, i + 1, k, v);
        int b = min_o(s, j, i, k + 1, v);
        int c = min_o(s, j, i + 1, k + 1, v);
        v[i][k] = min3(a, b, c) + 1;
    }
    return v[i][k];
}
void solve()
{
    // Your solution logic here
    string s, j;
    cin >> s >> j;
    vector<vector<int>> v(s.size() + 1, vector<int>(j.size() + 1, -1));
    cout << min_o(s, j, 0, 0, v) << endl;
}

int main()
{
    fastio();

    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }

    return 0;
}
