#include<bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
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


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

/*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
bool revsort(ll a, ll b) {return a > b;}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
void google(int t) {cout << "Case #" << t << ": ";}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
vector<int> graph;
vector<bool> visited, in_cycle;
vector<int> component_size;

void dfs(int node, int& size, vector<bool>& on_path) {
    visited[node] = true;
    on_path[node] = true;

    int next_node = graph[node];
    if (!visited[next_node]) {
        dfs(next_node, size, on_path);
    } else if (on_path[next_node]) {
        // Found a cycle
        int cycle_node = next_node;
        do {
            size++;
            in_cycle[cycle_node] = true;
            cycle_node = graph[cycle_node];
        } while (cycle_node != next_node);
    }

    on_path[node] = false;
}

int count_reachable_pairs(int n) {
    graph.resize(n + 1);
    visited.assign(n + 1, false);
    in_cycle.assign(n + 1, false);
    component_size.assign(n + 1, 0);

    // Input graph
    for (int i = 1; i <= n; ++i) {
        cin >> graph[i];
    }

    // Detect cycles
    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            int size = 0;
            vector<bool> on_path(n + 1, false);
            dfs(i, size, on_path);
            if (size > 0) {
                component_size[i] = size;
            }
        }
    }

    // Count pairs
    long long count = 0;
    for (int i = 1; i <= n; ++i) {
        if (in_cycle[i]) {
            count += component_size[i] * component_size[i];
        }
    }

    return count;
}

void solve() {

 int n;
    cin >> n;
    
    cout << count_reachable_pairs(n) << endl;



}
int main() {
    fastio();
int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}