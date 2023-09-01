#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n,a;
    cin>>n>>a;
    int b[n];
    for(int i=0;i<n;i++)
    cin>>b[i];
    double sum=0;
    int count =n;
    for(int i=0;i<n;i++)
    sum=sum+b[i];

    while(a--){
        sum=sum-*max_element(b,b+n);
        sum=sum-*min_element(b,b+n);
        n=n-2;
    }
    
double avg=sum/n;
cout<<fixed<<setprecision(6)<<avg<<endl;
}
return 0;
}