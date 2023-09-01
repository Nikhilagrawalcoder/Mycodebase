#include<bits/stdc++.h>
using namespace std;
bool pal(string k,int start,int end){
    if(start>end){
        return true;
    }
    if(k[start]!=k[end])
    return false;
    return (k,start+1,end-1);
}
int main(){

string s;
cin>>s;
int start=0;
int end=s.size()-1;
cout<<pal(s,start,end);


return 0;
}

