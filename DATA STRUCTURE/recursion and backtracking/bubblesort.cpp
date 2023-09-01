#include<bits/stdc++.h>
using namespace std;


void bubble_sort(int *a,int n){
    if(n==1)
    return ;
    else{
        for(int i=0;i<n-1;i++){
            {
if(a[i]>a[i+1])
{
    swap(a[i],a[i+1]);
}
            }
        }
         bubble_sort(a,n-1);
    }
}


int main(){

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
bubble_sort(a,n);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
return 0;
}

