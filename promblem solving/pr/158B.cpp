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



void solve() {
    int n;
    cin>>n;
     int x1=0;
    int x2=0;
    int x3=0;
    int x4=0;
    int a[n];
    for(int i=0;i<n;i++){d
        cin>>a[i];
        if(a[i]==1)
        x1++;
        if(a[i]==2)
        x2++;
        if(a[i]==3)
        x3++;
        if(a[i]==4)
        x4++;
    }
   int count=x4;
   if(x2==0 and x3==0){
   if(x1%4==0)
   count=count+(x1/4);
   else
   count=count+(x1/4)+1;
   }
else if(x3==0){
    if((x1+2*x2)%4==0){
        count=count+(x1+2*x2)/4;
    }
    else 
    count=count+(x1+2*x2)/4 +1;
}
else if(x2==0){
     if((x1+3*x3)%4==0){
        count=count+(x1+3*x3)/4;
    }
    else 
    count=count+(x1+3*x3)/4 +1;
}
else if(x1==0){
    if(x2%2)
count=count+(x2+x3);
else
count=count+(x2/2)+(x3);
}
else {
if((x1+2*x2+3*x3)%4==0)
count=count+(x1+2*x2+3*x3)/4;
else{
    count=count+(x1+2*x2+3*x3)/4+1;
}
}
cout<<count;
    
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