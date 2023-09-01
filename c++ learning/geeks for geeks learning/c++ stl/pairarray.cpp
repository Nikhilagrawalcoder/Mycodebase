#include<bits/stdc++.h>
using namespace std;

int main(){
pair<int,int>p[3];
p[0]={1,2};
p[1]={5,6};
p[2]={7,8};
swap(p[0],p[2]);
for(int i=0;i<3;++i){
    cout<<p[i].first<<" "<<p[i].second;
}
return 0;
}