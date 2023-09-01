#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n,q;
    cin>>n>>q;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int max =-100;
    int c=-1;
for(int i=0;i<n;i++){
    if(a[i]<=q){
        if(b[i]>max){
            max=b[i];
            c=i+1;
            q--;
        }
        else
        q--;
    }
    else q--;
}
cout<<c<<endl;
}
return 0;
}