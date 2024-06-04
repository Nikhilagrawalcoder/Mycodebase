#include <bits/stdc++.h>
using namespace std;

// Function to compute the greatest common divisor (GCD)
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    vector<int> b(n - 1);
    for (int i = 0; i < n - 1; ++i)
        b[i] = gcd(a[i], a[i + 1]);

    int idx = -1;
    for (int i = 0; i < n - 2; ++i) {
        if (b[i] > b[i + 1]) {
            idx = i;
            break;
        }
    }

    if (idx == -1) {
        cout << "YES" << endl;
        return;
    }

    vector<int> a1, a2, a3;
    for (int i = 0; i < n; ++i) {
        if (i != idx + 1)
            a1.push_back(a[i]);
        if (i != idx + 2)
            a2.push_back(a[i]);
        if (i != idx)
            a3.push_back(a[i]);
    }

    vector<int> b1(n - 2), b2(n - 2), b3(n - 2);
    for (int i = 0; i < n - 2; ++i) {
        b1[i] = gcd(a1[i], a1[i + 1]);
        b2[i] = gcd(a2[i], a2[i + 1]);
        b3[i] = gcd(a3[i], a3[i + 1]);
    }

    bool flag1 = true, flag2 = true, flag3 = true;
    for (int i = 0; i < n - 3; ++i) {
        if (b1[i] > b1[i + 1])
            flag1 = false;
        if (b2[i] > b2[i + 1])
            flag2 = false;
        if (b3[i] > b3[i + 1])
            flag3 = false;
    }

    if (!(flag1 || flag2 || flag3)) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tes;
    cin >> tes;
    for (int t = 1; t <= tes; ++t) {
        solve();
    }

    return 0;
}
