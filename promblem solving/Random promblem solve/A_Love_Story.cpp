#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    string k="codeforces";
    int c=0;
    for(int i=0;i<10;i++){
        if(s[i]!=k[i])
        c++;

    }
    cout<<c<<endl;

}
return 0;
}