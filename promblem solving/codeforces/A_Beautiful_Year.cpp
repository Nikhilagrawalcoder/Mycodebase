#include<bits/stdc++.h>
#include<set>
using namespace std;
int year(int k){
    set<int>j;
    while(k>0)
    {
        j.insert(k%10);
        k=k/10;
    }
    return j.size();
}

int main(){
int n;
cin>>n;
int k=n+1;
while(year(k)!=4)
k++;
cout<<k;
return 0;
}