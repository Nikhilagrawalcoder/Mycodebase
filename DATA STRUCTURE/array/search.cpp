#include<bits/stdc++.h>
using namespace std;
#define ll long long
int countBitsFlip(int a, int b){
    int count =0;
    while(a!=0 || b!=0)
    {
        cout<<a<<" "<<b<<" "<<count<<endl;
        if((a&1)!= (b&1))
        count++;
        a>>=1;
        b>>=1;
        cout<<a<<" "<<b<<" "<<count<<endl;
        cout<<endl;
    }
    return count;
    
}
int main()
{
    cout<<countBitsFlip(10,20);
    return 0;
}