#include<iostream>
#include<stack>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

stack<int>st;
int out[n]={0};
for(int i=0;i<n;i++){
    while(!st.empty() && arr[i]>arr[st.top()]){
        out[st.top()]=arr[i];
        st.pop();
    }
    st.push(i);
}


for(int i=0;i<n;i++){
    
    
    cout<<out[i]<<" ";
}
}