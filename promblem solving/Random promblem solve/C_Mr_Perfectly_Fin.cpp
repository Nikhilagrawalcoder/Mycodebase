#include <bits/stdc++.h>  
using namespace std;  
  
int main() {  
    int t;  
    cin >> t;  
  
    while (t--) {  
        int n;  
        cin >> n;  
  
        vector<pair<int, bitset<2>>> books(n);  
  
        for (int i = 0; i < n; i++) {  
            int m;  
            bitset<2> s;  
            cin >> m >> s;  
            books[i] = {m, s};  
        }  
  
        sort(books.begin(), books.end(), [](auto a, auto b) {  
            return (a.second[0] != b.second[0]) ? a.second[0] > b.second[0] : a.second[1] > b.second[1];  
        });  
  
        int s1 = 0, s2 = 0, total = 0;  
        for (auto book : books) {  
            if (s1 && s2) break;  
            if (book.second[0] && !s1) {  
                s1 = 1;  
                total += book.first;  
            }  
            if (book.second[1] && !s2) {  
                s2 = 1;  
                total += book.first;  
            }  
        }  
  
        if (s1 && s2) cout << total << endl;  
        else cout << -1 << endl;  
    }  
  
    return 0;  
}

