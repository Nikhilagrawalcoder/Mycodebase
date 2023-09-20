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
        //     int t=1;
        //     // cin>>t;
        //     for(int i=1;i<=t;i++){
        
        //    }
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=1;
        
        for(int i=0;i<n;i++){
            int c=a[i];
            int d=0;
            
            for(int j=i+1;j<n;j++){
if(c>=a[j]){
d++;
c=a[j];
}
else{
    break;
}

            }
               int e=a[i];
            int cf=0;
            for(int j=n-1-i;j>=0;j--){
if(e<=a[j] or a[i]<=a[j]){
cf++;
e=a[j];
}
else{
    break;
}


            }
            cout<<cf<<endl;
            count=max(count,d+cf);
          
        }
        if(n==1)
        cout<<1;
        else
        cout<<count;
         
        

            return 0;
        }
