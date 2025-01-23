#include <bits/stdc++.h>
using namespace std;

int d(int index,vector<int>&heights,int ans){
    if(index==heights.size()){
        return ans;
    }
    int w,e;
    if(index+1<heights.size())
    w=d(index+1,heights,ans+abs(heights[index+1]-heights[index]));
    cout<<w<<endl;
    if(index+2<heights.size())
    e=d(index+2,heights,ans+abs(heights[index+2]-heights[index]));
    cout<<e<<endl;
   return min(e,w);
}
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    return d(0,heights,0);
    
}
int main()
{   
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>heights(n);
    for(int i=0;i<n;i++)
    cin>>heights[i];
    cout<<frogJump(n,heights)<<endl;
}
    return 0;
}