/* Prefix	Uses/Method",
      "cpp	CP Starter Template",
      "c++	C++ Starter Template",
      "dsa	DSA Specific Starter Template",
      "Common Codes",
      "Prefix	Uses/Method",
      "forn	For loop with n size",
      "whilen	While loop with n size",
      "couta	Print elements of array of n size",
      "coutv	Print elements of vector",
      "autov	Print element of vector with auto",
      "Input Taking Template",
      "Prefix	Uses/Method",
      "inai	Taking input in n size int array",
      "inal	Taking input in n size long long int array",
      "invi	Taking input in n size int vector",
      "invl	Taking input in n size long long int vector",
      "Basic Algo + Mathematics",
      "Prefix	Uses/Method",
      "gcd	Greatest Common Divisor",
      "maxll	Maximum Function with long long int",
      "minll	Minimum Function with long long int",
      "isPowerOfTwo	Check number is power of two",
      "isPrime	Check number is prime",
      "primeFactors	return all prime factors",
      "countDivisors	count of all divisors",
      "divisorFunction	sum of all divisors",
      "nFactorial	return n!",
      "nFactorialMOD	return n!%mod",
      "nextPowerOfTwo	next power of two",
      "prevPowerOfTwo	prev power of two",
      "xpowery	x^y",
      "xpoweryMOD	(x^y)%mod",
      "sieve	sieve of eratosthenes",
      "lcm	Least Common Multiple",
      "combinatorics	Combinatorics",
      "Graph",
      "Prefix	Uses/Method",
      "adjMatrix	Adjacency Matrix in Graph",
      "adjList	Adjacency List in Graph",
      "bfs	BFS in Graph",
      "dfs	DFS in Graph",
      "topoBfs	Topological BFS in Graph",
      "topoDfs	Topological DFS in Graph",
      "isCycleDfs	Is Cycle is Present in Graph using DFS",
      "isCycleBfs	Is Cycle is Present in Graph using BFS",
      "shortesPathDAG	Shortest Path Direct Acyclic Graph",
      "dijkstra	Dijkstra shortest path algorithm",
      "bellmanFord	Bellman Ford shortest path algorithm",
      "Tree",
      "Prefix	Uses/Method",
      "tstruct	Tree Structure",
      "inorder	Tree Inorder",
      "preorder	Tree Preorder",
      "postorder	Tree Postorder",
      "levelOrder	Level Order Traversal Tree",
      "treeSize	Tree Size",
      "treeHeight	Tree Height",
      "treeDiaSimple	Tree Diameter Simple",
      "treeDiaOpt	Tree Diameter Optimized",
      "treeSum	Tree Node Sum",
      "treeMax	Tree Node Maximum",
      "treeLeftView	Tree Left View",
      "treeRightView	Tree Right View",
      "isBalancedSimple	Tree Balanced or Not Simple",
      "isBalancedOpt	Tree Balanced or Not Optimized",
      "flatten	Flatten Binary Tree",
      "BST",
      "Prefix	Uses/Method",
      "insBst	Insert in BST",
      "delBst	Delete in BST",
      "searchBst	Search in BST",
      "constructBst	Construct BST",
      "isBst	Check the given tree is BST or not",
      "sortArrToBst	Sorted array to Bst",
      "isIdentical	Is Bst identical or nor",
      "zigzagTraversal	zigzagTraversal Bst",
      "String",
      "Prefix	Uses/Method",
      "palindrome	palindrome-String",
      "pangram	pangram-string",
      "anagram	anagram-strings",
      "strtodec	stringtodecimal",
      "dectostr	decimaltostring",
      "kmp	occurences of pattern in a string",
      "distict_characters	count of unique characters in a string",
      "lc_subsequence	longest common subsequence of two strings",
      "lc_substring	longest common substring of two strings",
      "Sorting",
      "Prefix	Uses/Method",
      "insort	Insertion Sort",
      "bubsort	Bubble Sort",
      "selsort	Selection Sort",
      "mersort	Merge Sort",
      "qsort	Quick Sort",
      "Saerching",
      "Prefix	Uses/Method",
      "bsearch	Binary Search */

#include <iostream>
#include <bits/stdc++.h>
// #include <sys/resource.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace chrono;
// using namespace __gnu_pbds;

// def


//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Asquare cout.tie(NULL);

//Aliases
using ll= long long;
using lld= long double;
using ull= unsigned long long;

//Constants
const lld pi= 3.141592653589793238;
const ll INF= LONG_LONG_MAX;
const ll mod=1e9+7;

//TypeDEf
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll,ll> umll;
typedef map<ll,ll> mll;

// Macros
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i,n) for(int i=0;i<n;i++)
#define rl(i,m,n) for(int i=n;i>=m;i--)
#define py cout<<"YES\n";
#define pm cout<<"-1\n";
#define pn cout<<"NO\n";
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()

//Debug
#ifdef NikhilAgrawal
#define debug(x) cerr << #x<<" "; cerr<<x<<" "; cerr << endl;
#else
#define debug(x);
#endif

// Operator overloads
template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }

// Utility functions
template <typename T>
void print(T &&t)  { cout << t << "\n"; }
void printarr(ll arr[], ll n){fl(i,n) cout << arr[i] << " ";cout << "\n";}
template<typename T>
void printvec(vector<T>v){ll n=v.size();fl(i,n)cout<<v[i]<<" ";cout<<"\n";}
template<typename T>
ll sumvec(vector<T>v){ll n=v.size();ll s=0;fl(i,n)s+=v[i];return s;}

// Mathematical functions
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} //__gcd 
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){if (b & 1)res = (res + a) % mod;b >>= 1;}return res;}
ll powermod(ll x, ll y, ll p){ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}

//Graph-dfs
// bool gone[MN];
// vector<int> adj[MN];
// void dfs(int loc){
//     gone[loc]=true;
//     for(auto x:adj[loc])if(!gone[x])dfs(x);
// }

//Sorting
bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}

//Bits
string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}

//Check
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}



bool is_sorted(int a[],int n){

fl(i,n-1){
if(a[i]>a[i+1])
return false;
}
return true;
}
//Code
void input()
{
    ll n;
    cin>>n;
}
//Main
int main()
{
    //ll t;
    //cin>>t;
    //fl(i,t)
    //{
        //input
    //}
    // input();
    // fl(i,t) //Kickstart
    // {
    //     cout<<"Case #"<<i+1<<": ";
    //     input();
    //     cout<<"\n";
    // }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b,c;
        cin>>a>>b>>c;
        
        for(int i=0;i<n;i++){
            if((a[i]==c[i] or b[i]==c[i]) &&( a[i]!=b[i]))
            {
                c++;
                
            }
        }
        if(c<n)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
//End