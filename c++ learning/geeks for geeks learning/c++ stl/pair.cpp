#include<bits/stdc++.h>
using namespace std;

int main(){
pair<int,int>p={1,2};
pair<int,int>&p1=p;
p1.first=5;
cout<<p.first<<p.second;
return 0;
}