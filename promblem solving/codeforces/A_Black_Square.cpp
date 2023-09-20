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
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
            int a[4];
            
            for(int i=0;i<4;i++){
                cin>>a[i];
            }
            string s;
            cin>>s;
            int sum=0;
            for(int i=0;i<s.size();i++){
           
            if(s[i]=='1'){
                sum=sum+a[0];
            }
            else if(s[i]=='2')
            sum=sum+a[1];
            else if(s[i]=='3')
            sum=sum+a[2];
            else
            sum=sum+a[3];
            }
            cout<<sum;
            return 0;
        }
