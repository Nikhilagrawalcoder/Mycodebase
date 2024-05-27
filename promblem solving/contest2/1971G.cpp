#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

#define vi vector<int>
#define pb push_back

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vi a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vi res(n);
        map<int, vi> mp;
        set<int> s;

        for (int i = 0; i < n; ++i) {
            mp[a[i]].pb(i);
            s.insert(a[i]);
        }

        while (!s.empty()) {
            set<int> s2, indices;
            int x = *s.begin();

            for (int i = 0; i <= 3; ++i) {
                int num = x ^ i;
                if (s.find(num) != s.end()) {
                    s.erase(num);
                    for (int i : mp[num]) {
                        indices.insert(i);
                    }
                    s2.insert(num);
                }
            }

            for (int y : s2) {
                int cnt = mp[y].size();
                while (cnt--) {
                    res[*indices.begin()] = y;
                    indices.erase(*indices.begin());
                }
            }
        }

        for (int i = 0; i < n; ++i) {
            cout << res[i] << " ";
        }
        cout << endl;
    }

    return 0;
}