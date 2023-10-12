#include<bits/stdc++.h>
using namespace std;
int main(){
int number;
cin>>number;
int arr[number];
for(int count=0;count<number;count++){
   cin>>arr[count];
}

int low=0;
int high=number-1;
while(low<=high){
    int temp=arr[low];
    arr[low]=arr[high];
    arr[high]=temp;
    low++;
    high--;
}
return 0;
}

