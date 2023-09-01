#include <bits/stdc++.h>
using namespace std;
bool isprime(int n){
int c=0;
for(int i=2;i<=n;i++){
    if(n%i==0)
    c++;
}
if(c==1)
return true;
return false;

}
    int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
int j=-1;;
for(int i=a+1;i<=b;++i){
    if(isprime(i))
    {
        j=i;
        break;
    }
}
if(j==b)
cout<<"YES";
else
cout<<"NO";


    return 0;
}