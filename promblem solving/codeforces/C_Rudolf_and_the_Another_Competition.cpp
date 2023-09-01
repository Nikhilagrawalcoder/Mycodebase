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
            int t=1;
             cin>>t;
            for(int i=1;i<=t;i++){
        int n,m,h;
        cin>>n>>m>>h;
        vector<int>pen;
        vector<int>poi;
        int a[n][m];
        while(n--){
            
            vector<int>v;
            for(int i=0;i<m;i++){
                int x;
                cin>>x;
                v.push_back(x);
            }
        
            sort(v.begin(),v.end());
             int penalty=v[0];
            int point=0;
            for(int i=0;i<m;i++){
                if((penalty+v[i])>h)
                break;
                else{
                    penalty=penalty+v[i];
                    point++;
                }
            }
            pen.push_back(penalty);
            poi.push_back(point);
        }
        int k=pen[0];
        int l=poi[0];
        int position=1;
        for(int i=1;i<poi.size();i++){
            if(l<poi[i])
            position++;
            else if(l==poi[i])
            {
                if(k<=pen[i])
                position--;
                else if(k>pen[i])
                position++;
            }
        }
        cout<<position<<endl;

           }
            return 0;
        }
