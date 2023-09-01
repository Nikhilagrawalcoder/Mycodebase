#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    string s;
    cin>>n;
    cin>>s;
    char  ch=s[0];
    string e="";
    e=e+s[0];
    for(int i=1;i<n;i++) {
if(s[i]==ch)
{
    ch=s[i+1];
e=e+s[i+1];
i++;
}

    }
    e.pop_back();
    cout<<e<<endl;
}
return 0;
}