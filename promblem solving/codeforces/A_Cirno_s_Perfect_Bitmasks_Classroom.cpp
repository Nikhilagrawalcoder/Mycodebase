#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
int t;
cin>>t;
while(t--){
      int n;
      cin>>n;
    //   if(n==1)
    //   cout<<3<<endl;
    //   else
    // {
    //     if(((n^(n-1))>0)and ((n&(n-1))>0))
    //     cout<<(n^(n-1))<<endl;
    
    //   else{
    //     cout<<(n^(n+1))<<endl;
    //   }
    // }
    for(int i=1;;i++){
        if((n^i)>0 and (n&i)>0)
        {
            cout<<i<<endl;
            break;
        }
    }
       }
    return 0;
}