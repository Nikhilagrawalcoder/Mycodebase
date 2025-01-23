#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include <string.h>

using namespace std;

const int MAX_N = 1e9 + 10;

long long dp[MAX_N];

long long solve(long long n, long long a, long long b, long long c)
{
    if (n <= 0)
    {
        return 0;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    long long res = a;
    if (n > 1)
    {
        res = min(res, b + solve(n - 1, a, b, c));
        if (n > 2)
        {
            res = min(res, b + c + solve(n - 2, a, b, c));
        }
    }
    return dp[n] = res;
}

int main()
{
    int t;
    cin >> t;
    memset(dp, -1, sizeof(dp));
    while (t--)
    {
        long long a, b, c, n;
        cin >> a >> b >> c >> n;
        long long res = solve(n, a, b, c);
        cout << res << endl;
    }
    return 0;
}