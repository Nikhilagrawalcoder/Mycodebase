#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  while(n--){
      long long t;
      cin>>t;
      if(t==1){
          cout<<-1<<endl;
      }
      else if(t<=1000000){
          cout<<1<<" "<<1<<" "<<t-1<<endl;
      }
      else if(t%1000000==0){
          cout<<(t/1000000)-1<<" "<<1000000<<" "<<1000000<<endl;
      }
      else if(t>1000000){
          cout<<t/1000000<<" "<<1000000<<" "<<t%1000000<<endl;
      }
  }
  return 0;
}