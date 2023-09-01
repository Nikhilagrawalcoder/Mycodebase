#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        
        int total=0;
        for(int i=a;i<=b;i++){
            int c=0;
        for(int j=0;j<=31;j++){
int mask=(1<<j);
if((i & mask)>0)
  c++;

        }
        total+=c;}
        cout<<total<<endl;
    }

    
    return 0;
}