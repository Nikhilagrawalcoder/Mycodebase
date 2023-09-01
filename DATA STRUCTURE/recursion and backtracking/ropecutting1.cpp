// template design 2  below
#include <bits/stdc++.h>
#include <math.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define M_PI 3.14159265358979323846

const int M = 998244353;
long long mod(long long x)
{
    return ((x % M + M) % M);
}
long long add(long long a, long long b)
{
    return mod(mod(a) + mod(b));
}
long long mul(long long a, long long b)
{
    return mod(mod(a) * mod(b));
}

ll modPow(ll a, ll b)
{
    if (b == 0)
        return 1LL;
    if (b == 1)
        return a % M;
    ll res = 1;
    while (b)
    {
        if (b % 2 == 1)
            res = mul(res, a);
        a = mul(a, a);
        b = b / 2;
    }
    return res;
}

int maxpieces(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;
    int res = max(maxpieces(n - a, a, b, c), maxpieces(n - b, a, b, c), maxpieces(n - c, a, b, c));
    if (res == -1)
        return -1;
    return res + 1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
    //     int t=1;
    //     // cin>>t;
    //     for(int i=1;i<=t;i++){

    //    }

    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int k = maxpieces(n, a, b, c);
    cout << k;
    return 0;
}
