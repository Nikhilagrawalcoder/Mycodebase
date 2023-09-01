#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int f=1;

    if(n==2)
    cout<<"NO"<<endl;
    
    else {
        for(int i=0;i<n-1;i++){
            if(a[i+1]-a[i]>1)
            {
                f=0;
                break;
            }
        }
        if(f==0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}
return 0;
}