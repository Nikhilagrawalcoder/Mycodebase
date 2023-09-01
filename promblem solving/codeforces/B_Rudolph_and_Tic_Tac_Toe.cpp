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
        char a[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>a[i][j];
            }
        }
        string result="DRAW";
       if(a[0][0]==a[0][1] and a[0][0]==a[0][2])
       result=a[0][0];
       else if(a[1][0]==a[1][1] and a[1][0]==a[1][2])
       result=a[1][0];
       else if(a[2][0]==a[2][1] and a[2][0]==a[2][2])
       result=a[2][0];
       else if(a[0][0]==a[1][1] and a[0][0]==a[2][2])
       result=a[0][0];
      else if(a[0][0]==a[1][0] and a[0][0]==a[2][0])
       result=a[0][0];
       else if(a[0][1]==a[1][1] and a[0][1]==a[2][1])
       result=a[0][1];
       else if(a[0][2]==a[1][2] and a[0][2]==a[2][2])
       result=a[0][2];
       else if(a[0][2]==a[1][1] and a[1][1]==a[2][0])
       result=a[1][1];


if(result==".")
cout<<"DRAW"<<endl;
else
cout<<result<<endl;


            }
            return 0;
        }
