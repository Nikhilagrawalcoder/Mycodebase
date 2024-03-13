#include <bits/stdc++.h>

using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int n;
int arr[100100];

void solve() {
    int n;
    cin>>n;
    int a[n];
    bool e[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>=a[0])
        e[i]=true;
        else
        e[i]=false;
    }
    // for(int i=0;i<n;i++){
    //     cout<<e[i]<<" ";
    // }
    int low=0;
    int high=n-1;
    int ans=0;
    while(low<=high){
int mid=(low+high)/2;
if(e[mid]==true){
    low=mid+1;
}
else{
    high=mid-1;
    ans=mid;
}
    }
    cout<<ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}