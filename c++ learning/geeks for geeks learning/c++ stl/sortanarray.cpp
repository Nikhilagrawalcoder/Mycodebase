#include<bits/stdc++.h>
using namespace std;

int main(){
int a[]={10,5,2};
char b[]={'G','H','k'};
pair<int,char>p[3];
for(int i=0;i<3;i++){
    p[i]={a[i],b[i]};
}
sort(p,p+3);
for(int i=0;i<3;i++)
cout<<p[i].second<<endl;
return 0;
}