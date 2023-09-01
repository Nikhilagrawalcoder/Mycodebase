#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int s=240-k;
    
    int c=0;
    for( int i=1;(s>=(5*i) &i<=n);i++){
        
        s=s-(5*i);
        c++;
       
      
    }
    cout<<c;

    return 0;
}