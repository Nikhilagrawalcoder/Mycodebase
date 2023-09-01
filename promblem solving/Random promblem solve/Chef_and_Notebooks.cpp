#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,k,n;
	    cin>>x>>y>>k>>n;
	    int p[n],c[n];
	  for(int i=0;i<n;i++){
	      int a,b;
	      cin>>a>>b;
	      p[i]=a;
	      c[i]=b;
	  }
	   int j=x-y;
	   int f=0;
	   for(int i=0;i<n;i++){
	       if(k>=c[i])
	       {
	           if(p[i]>=j)
	           f=1;
	           break;
	       }
	   }
	   if(f)
	   cout<<"LuckyChef"<<endl;
	   else
	   cout<<"UnluckyChef"<<endl;
	}
	return 0;
}