#include<utility>
#include<bits/stdc++.h>
using namespace std;

int main(){
pair<int,int>p1(2,3);
pair<int,int>p2(10,3);
cout<<p1.first<<" " << p1.second<<endl;
cout<<p2.first<<" "<<p2.second<<endl;
cout<<(p1==p2)<<endl;
cout<<(p1<p2)<<endl;
cout<<(p1>p2)<<endl;
cout<<(p1!=p2)<<endl;
return 0;
}