#include<iostream>
using namespace std;

template<typename T>
int search(T a[],int n,T k){
    for(int p=0;p<n;p++){
        if(a[p]==k)
        return p;
    }
    return n;
}

int main(){
int a[]={1,2,3,4};
int n=sizeof(a)/sizeof(int);
int k=3;
cout<<search(a,n,k);




    return 0;
}