#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a[256]={0};
    for(int i=0;i<s.size();i++){
        a[s[i]]++;
    }
int q;
cin>>q;
while(q--){
    char x;
    cin>>x;
    cout<<a[x];
}


return 0;
}

