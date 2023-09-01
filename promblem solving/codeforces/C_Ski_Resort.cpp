#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n,k,q;
    cin>>n>>k>>q;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
 ll p=0;
 int e=0;
 for(int i=0;i<n;i++){
    if(a[i]<=q)
    e++;
    else {
        e=0;
        }
        if(e>=k){
            p+=e-k+1;
            
        }
        
    
    
 }
 
 cout<<p<<endl;
  

}
return 0;
}