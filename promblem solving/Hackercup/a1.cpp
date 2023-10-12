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
 
        int main(){
            ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            cout<<setprecision(10);
          freopen("input.txt", "r", stdin);
           freopen("output.txt", "w", stdout);
            int t=1;
             cin>>t;
            for(int i=1;i<=t;i++){
        int s,d,k;
        cin>>s>>d>>k;
   int r1,r2,r3;
   r1=k+1;
   r2=k;
   r3=k;
   int bun=2*(s+d);
   int chesse=s+2*d;
   int patty=s+2*d;
   if(r1<=bun and r2<=chesse and r3<=patty){
    cout<<"Case #"<<i<<":"<<" YES"<<endl;
   }
   else{
    cout<<"Case #"<<i<<":"<<" NO"<<endl;
   }
           }
            return 0;
        }
