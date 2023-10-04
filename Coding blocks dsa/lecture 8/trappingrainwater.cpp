#include<bits/stdc++.h>
using namespace std;

    int trap(vector<int>& height) {
        vector<int>v;
        vector<int>k;
        v.push_back(height.begin());
        for(int i=0;i<height.size();i++){
v.push_back(*max_element(v.begin(),v.begin()+i));
        }
    
    for(int j=height.size()-1;j>=0;j--){
k.push_back(*max_element(height.begin()+j,height.end()));
    }
    reverse(k.begin(),k.end());
    int sum=0;
    for(int y=0;y<height.size();y++){
        sum=sum+min(v[y],k[y])-height[y];
    }
    return sum;
    }

int main(){


int n;
cin>>n;
vector<int> v;
for(int i=0;i<n;i++){

}

return 0;
}

