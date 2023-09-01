#include<bits/stdc++.h>
using namespace std;
void f(int n,int i){
    if(i>n)
    return ;
    cout<<"NIKHIL";
    f(n,i+1);
}
int main(){
    int n;
    cin>>n;
    f(n,1);
}