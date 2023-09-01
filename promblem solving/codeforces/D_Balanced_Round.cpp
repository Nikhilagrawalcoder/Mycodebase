

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

        int t;
        cin >> t;
        while (t--)
   
    {
              ll n, k;
              cin >> n  >> k;
              ll a[n];
              for (ll i = 0; i < n; i++) cin >> a[i];
              sort(a, a + n);
              int i = 0;
              ll ans = 0;
              while (i < n)
     
        {
                    int j = i + 1;
                    while (j < n)
            {
                          if (a[j] - a[j - 1] > k)
                {
                     break;
                    
                }
                          j++;
                       
            }
                    ll tt = j - i;
                    ans = max(ans, tt);
                    i = j;
                 
        }
              cout << n - ans << endl;
           
    }
}
