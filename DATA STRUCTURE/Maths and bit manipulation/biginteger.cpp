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
void multiply(int *a,int&n,int no){
    int carry=0;
    for(int i=0;i<n;i++){
        int product=a[i]*no+carry;
        a[i]=product%10;
        carry=product/10;
    }
    while(carry){
        a[n]=carry%10;
        carry=carry/10;
        n++;

    }

}



        void bigfact(int p){
            int *a=new int[1000];
            for(int i=0;i<1000;i++)
            a[i]=0;
            a[0]=1;
            int n=1;
            for(int i=2;i<=p;i++){
                multiply(a,n,i);
            }
             for(int i=n-1;i>=0;i--){
                cout<<a[i];
            }
        
           
        }
        int main(){
            ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            cout<<setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
        //     int t=1;
        //     // cin>>t;
        //     for(int i=1;i<=t;i++){
        
        //    }
        int n;
        cin>>n;
        bigfact(n);
            return 0;
        }
