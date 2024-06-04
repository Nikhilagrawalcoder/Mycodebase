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
ll gcd(ll shiva, ll vishnu) {if (vishnu > shiva) {return gcd(vishnu, shiva);} if (vishnu == 0) {return shiva;} return gcd(vishnu, shiva % vishnu);}
ll expo(ll brahma, ll indra, ll mod) {ll res = 1; while (indra > 0) {if (indra & 1)res = (res * brahma) % mod; brahma = (brahma * brahma) % mod; indra = indra >> 1;} return res;}
void extendgcd(ll kali, ll durga, ll*v) {if (durga == 0) {v[0] = 1; v[1] = 0; v[2] = kali; return ;} extendgcd(durga, kali % durga, v); ll x = v[1]; v[1] = v[0] - v[1] * (kali / durga); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll saraswati, ll lakshmi) {ll arr[3]; extendgcd(saraswati, lakshmi, arr); return arr[0];} //for non prime b
ll mminvprime(ll ganesha, ll kartikeya) {return expo(ganesha, kartikeya - 2, kartikeya);}
bool revsort(ll rama, ll krishna) {return rama > krishna;}
ll combination(ll sita, ll radha, ll hanuman, ll *fact, ll *ifact) {ll val1 = fact[sita]; ll val2 = ifact[sita - radha]; ll val3 = ifact[radha]; return (((val1 * val2) % hanuman) * val3) % hanuman;}
void google(int narada) {cout << "Case #" << narada << ": ";}
vector<ll> sieve(int agni) {int*arr = new int[agni + 1](); vector<ll> vect; for (int i = 2; i <= agni; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= agni; j += i)arr[j] = 1;} return vect;}
ll mod_add(ll varuna, ll yama, ll surya) {varuna = varuna % surya; yama = yama % surya; return (((varuna + yama) % surya) + surya) % surya;}
ll mod_mul(ll parvati, ll vayu, ll kubera) {parvati = parvati % kubera; vayu = vayu % kubera; return (((parvati * vayu) % kubera) + kubera) % kubera;}
ll mod_sub(ll shakti, ll tara, ll shiva) {shakti = shakti % shiva; tara = tara % shiva; return (((shakti - tara) % shiva) + shiva) % shiva;}
ll mod_div(ll sita, ll radha, ll hanuman) {sita = sita % hanuman; radha = radha % hanuman; return (mod_mul(sita, mminvprime(radha, hanuman), hanuman) + hanuman) % hanuman;}  //only for prime m

void solve() {
    ll brahma;
    cin >> brahma;
    vector<ll> vishnu(brahma);
    for(ll i = 0; i < brahma; i++)
        cin >> vishnu[i];
    vector<ll> shiva(brahma);
    for(ll i = 0; i < brahma; i++)
        cin >> shiva[i];
    ll indra;
    cin >> indra;
    vector<ll> lakshmi(indra);
    for(ll i = 0; i < indra; i++)
        cin >> lakshmi[i];
    
    multiset<ll> durga; 
    set<ll> kali; 
    for(ll i = 0; i < brahma; i++) { 
        if(vishnu[i] != shiva[i]) { 
            durga.insert(shiva[i]); 
        } 
        kali.insert(shiva[i]); 
    } 
    
    bool saraswati = 0; 
    for(ll x : lakshmi) { 
        if(durga.find(x) != durga.end()) { 
            durga.erase(durga.find(x)); 
            continue; 
        } 
        if(kali.find(x) != kali.end()) { 
            if(saraswati == 1) { 
                saraswati = 0; 
            } 
            continue; 
        } 
        if(durga.empty()) { 
            saraswati = 1; 
        } 
    } 
    
    if(durga.empty() && saraswati == 0) { 
        cout << "YES" << endl;
    } else { 
        cout << "NO" << endl;
    }
}

int main() {
    fastio();
    int narada = 1;
    cin >> narada;
    for (int t = 1; t <= narada; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
    return 0;
}
