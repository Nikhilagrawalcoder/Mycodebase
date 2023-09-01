#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    int max=0;
    int c=0;
    for(int i=0;i<n;i++){

        if(a[i]==0)
        {
            c++;
        }
        else
        {
            if(max<c){
            max=c;
            c=0;}
            else
            c=0;

        }

    }
    if(c!=0){
        if(max<c)
        max=c;
    }
    cout<<max<<endl;
   
}


return 0;
}