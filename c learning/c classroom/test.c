#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	   int n;
	   scanf("%d",&n);
	   int a[n];
	   int b[n];
	   
	   for(int i=0;i<n;i++){
	       scanf("%d",&a[i]);
	   }
	   for(int i=0;i<n;i++){
	       scanf("%d",&b[i]);
	   }
	   int e=0,f=0,g=0,h=0;
	   for(int i=0;i<n;i++){
	       if(a[i]==0)
	           e=e+1;
	           else if (a[i]==1)
	           f=f+1;
	       
	   }
	   for(int i=0;i<n;i++){
	       if(b[i]==0)
	       g=g+1;
	       else if(b[i]==1)
	       h=h+1;
	   }
	   if(e==g ){
	       if(h==f)
	       printf("Yes\n");
	       else
	       printf("No\n");
	   }
	   else
	   printf("No\n");
	   
	   
	   
	   
	}
	return 0;
}

