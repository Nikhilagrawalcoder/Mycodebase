#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int k=1;
    for(int i=1;i<=n;i++){
        k=k*i;
    }
int c=0;
while(k%10==0){
   
    c++;
    k=k/10;
}
cout<<c;
    return 0;
}