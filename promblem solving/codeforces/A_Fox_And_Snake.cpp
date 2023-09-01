#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
for(int i=1;i<=a;i++){
    for(int j=1;j<=b;j++){
        if(i%2)
        cout<<"#";
        else if(i%4==0 and j==1)
        cout<<"#";
        else if(i%4==0 and j<=b){
                cout<<".";
            }
        else if(i%2==0 and j<b){
            cout<<".";
        }
        
        else
        cout<<"#";
    }
    cout<<"\n";
}




    return 0;
}