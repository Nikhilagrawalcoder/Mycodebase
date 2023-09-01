#include<iostream>
using namespace std;

int main(){
int n,x;
cin>>n>>x;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int c=0;
for(int i=0;i<n-1;i++){
    if(a[i+1]-a[i]<=x)
    {
        c=a[i+1];
        break;
    }

}
if(c)
cout<<c<<endl;
else
cout<<-1<<endl;
return 0;
}