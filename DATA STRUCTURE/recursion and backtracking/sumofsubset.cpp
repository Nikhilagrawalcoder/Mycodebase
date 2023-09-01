// template design 2  below
#include <bits/stdc++.h>
        #include <math.h>
    
        using namespace std;
        typedef long long ll;
        typedef unsigned long long ull;
        # define M_PI  3.14159265358979323846
    
    
        const int M=998244353;
        long long mod(long long x){
            return ((x%M + M)%M);
        }
        long long add(long long a, long long b){
            return mod(mod(a)+mod(b));
        }
        long long mul(long long a, long long b){
            return mod(mod(a)*mod(b));
        }
    
        ll modPow(ll a, ll b){
            if(b==0) return 1LL;
            if(b==1) return a%M;
            ll res=1;
            while(b){
                if(b%2==1)res=mul(res,a);
                a=mul(a,a);
                b=b/2;
            }
            return res;
        }
 int sumsub(int v[],int n,int sum){
    if(n==0){
if(sum==0)
return 1;
else return 0;
    }
    return sumsub( v,n-1,sum)+  sumsub(v,n-1,sum-v[n-1]);
  
 }
        int main(){
            ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            cout<<setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
         int n;
         cin>>n;
        int v[n];
         int sum;
         cin>>sum;
         for(int i=0;i<n;i++){
           cin>>v[i];
        
         }
           cout<<sumsub(v,n,sum);
            return 0;
        }
