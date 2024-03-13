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

set <int> final;

void solver(vector<pair<int,char>> A,int ind,int k,int n,int curr,char aya){
    if(ind>=k){
        final.insert(curr+1);
        return;
    }
    if(aya=='0'){
        curr=curr+A[ind].first;
        ind++;
        curr=curr%n;
        solver(A,ind,k,n,curr,A[ind].second);
    }
    else if(aya=='1'){
        curr=curr-A[ind].first;
        ind++;
        curr=curr%n;
        solver(A,ind,k,n,curr,A[ind].second);
    }
    else{
        solver(A,ind,k,n,curr,'0');
        solver(A,ind,k,n,curr,'1');
    }

}

    
void solve() {
    int n,k,x;
    cin>>n>>k>>x;
    vector<pair<int,char>> A;
    for(int i=0;i<k;i++){
        int x;
        char c;
        cin>>x>>c;
        A.push_back({x,c});
    }
    solver(A,0,k,n,x-1,A[0].second);

    // sort(final.begin(),final.end());
    cout<<final.size()<<endl;
   for(auto i:final)
   cout<<i<<" ";

    final.clear();


}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}