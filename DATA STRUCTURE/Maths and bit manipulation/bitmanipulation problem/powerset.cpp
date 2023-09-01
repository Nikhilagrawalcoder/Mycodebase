#include<bits/stdc++.h>
using namespace std;
void powerset(string s){
int n=s.length();
int powsize=pow(2,n);
for(int counter=0;counter<powsize;counter++){
    for(int j=0;j<n;j++){
        if(counter &(1<<j)!=0)
        cout<<s[j];
    }
    cout<<"\n";
}


}



int main(){
    string s;
    cin>>s;
    powerset(s);
}

