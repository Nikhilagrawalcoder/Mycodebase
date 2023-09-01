#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    int b[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&b[i]);
	    }
	    int arr[n];
	    int i=0,c=0;
	    for(int j=0;j<n;j++){
	        if(a[j]>0&&b[j]>0){
	       c=c+1;
	            
	        }
	        else{
	        arr[i]=c;
	        i++;
	        c=0;
	            
	        }
	            
	        }
	   
	    int max=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]>max)
	        max=a[i];
	    }
	    printf("%d\n",max);
	    
	}
/* 4
3
3 1 2
2 4 1
2
0 0
10 10
4
5 4 0 2
3 1 1 0
5
0 1 1 2 0
1 1 0 0 3*/

	        
	        
	  
	        
	   
	
	return 0;
}

