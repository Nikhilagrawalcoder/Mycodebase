#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        long long sum = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            sum += a[i];
        }

        int max_xor = 0;
        int mask = 0;
        for (int i = 31; i >= 0; --i)
        {
            mask |= (1 << i);
            int max_xor_candidate = max_xor | (1 << i);
            int prefix_xor = 0;
            for (int j = 0; j < n; ++j)
            {
                prefix_xor ^= (a[j] & mask);
                if (prefix_xor == max_xor_candidate)
                {
                    max_xor = max_xor_candidate;
                    break;
                }
            }
        }

        long long minVal = sum - max_xor;
        cout << minVal << endl;
        t--;
    }

    return 0;
}