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
         
        void toh(int n,int A=1, int B=2,int C=3){
            if(n==1){
                cout<<A<<" "<<C<<endl;
                return ;
            }
            toh(n-1,A,C,B);
            cout<<A<<" "<<C<<endl;
            toh(n-1,B,A,C);

        }
 
        int main(){
            ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            cout<<setprecision(0);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
           int n;
           cin>>n;
           cout<<pow(2,n)-1<<endl;
           toh(n);
            return 0;
        }
