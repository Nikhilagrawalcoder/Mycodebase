#include<bits/stdc++.h>
using namespace std;
char words[][10]={"zero","one","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
void itos(int n){
    if(n==0){
        return ;
    }
    itos(n/10);
    cout<<words[n%10]<<" ";
    
}
int main(){

int n;
cin>>n;
itos(n);


return 0;
}

