#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        string s;
        cin>>n>>k;
        cin>>s;
        string b="";
        if(s[0]=='0'){
            k = k-1;
            s[0]='1';
        }
        for(int i=0;i<k;i++)
        b+='0';
        cout<<s+b<<endl;
    }
 // your code goes here
 return 0;
}
