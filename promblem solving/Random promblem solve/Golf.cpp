#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long  t;
	cin>>t;
	while(t--){
	   long long  n,x,k;
	   cin>>n>>x>>k;
	 int f=0;
	 long long int a[n+2];
	 for(long long int i=0;i<n+2;i++){
	     a[i]=i;
	 }
	 for(int i=0;i<n+2;i=i+2){
	     if(a[i]==x)
	     f=1;
	 }
	 for(int i=n+1;i>=0;i=i-2)
	 {
	     if(a[i]==x)
	     f=1;
	 }
	 if(f)
	 cout<<"YES"<<endl;
	 else
	 cout<<"NO"<<endl;
	}
	
	return 0;
}