#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int>v{10,20,30};
for(int x:v)
cout<<x<<endl;
v.push_back(5);
for(auto x:v)
cout<<x<<endl;
return 0;
}