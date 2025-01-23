#include <bits/stdc++.h>
using namespace std;
void multilply(int *a,int &n,int no){
    int carry=0;
    for(int i=0;i<n;i++){
        int ans=a[i]*no+carry;
        a[i]=ans%10;
        carry=ans/10;
    }
    while(carry>0){
        a[n]=carry%10;
        carry=carry/10;
        n++;
    }
}
void big_factorial(int number){
    int a[1000]={0};
    a[0]=1;
    int n=1;
    for(int i=2;i<=number;i++){
        multilply(a,n,i);
    }
    for(int i=n-1;i>=0;i--){
        cout<<a[i];
    }
}
int main()
{   
    int number;
    cin>>number;
    big_factorial(number);
    return 0;
}