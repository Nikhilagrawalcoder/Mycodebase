#include<iostream>
using namespace std;

int main(){
int m,n;
m=5,n=6;
int **arr;
arr=new int*[m];
for(int i=0;i<m;i++)
arr[i]=new int[n];
for(int i=0;i<m;i++){
    for(int j=0;i<n;i++){
        arr[i][j]=10;
        cout<<arr[i][j]<<10;
    }
}
return 0;
}