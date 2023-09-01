#include <bits/stdc++.h>
using namespace std;
string eoc(int n){
int k=n&1;
if(k)
return "odd";
return "even";
}
int gi(int n,int i){
return (n&(1<<i)>0)?1:0;
}
void si(int &n,int i){
n= n|(1<<i);
}
void ci(int &n,int i){
    int mask=~(1<<i);
    n= (n&(mask));
}
void ui(int &n,int i,int v){
    int mask=~(1<<i);
    int no=n&mask;
    n= no|(v<<i);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int i;
    int v;
    cin>>n>>i>>v;
    cout<<eoc(n)<<endl;
    cout<<gi(n,i)<<endl;
    
si(n,i);
cout<<n<<endl;
    ci(n,i);
    cout<<n<<endl;
    ui(n,i,v);
    cout<<n<<endl;
    return 0;
}