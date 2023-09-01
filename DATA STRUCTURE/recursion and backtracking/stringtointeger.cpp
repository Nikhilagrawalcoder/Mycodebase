#include<bits/stdc++.h>
using namespace std;
int sto(char *s,int n){
    if(n==0)
    return 0 ;
    int digit=s[n-1]-'0';
    int sd=sto(s,n-1);
    return sd*10+digit;
}
int main(){

char s[]="1234";

int n=strlen(s);
cout<<sto(s,n)+10;

return 0;
}

