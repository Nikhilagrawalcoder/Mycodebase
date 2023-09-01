#include<bits/stdc++.h>
using namespace std;

int po(int a,int n){
    if(n==0)
    return 1;
    return a*po(a,n-1);
}


int main(){

int a,n;
cin>>a>>n;
cout<<po(a,n);


return 0;
}

