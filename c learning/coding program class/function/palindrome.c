#include <stdio.h>
#include<math.h>
void pal(int n){
    int s=0;
    int r;
    int N=n;
    for(int i=0;n;i++){
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    printf("%d\n",s);  
    if(s==N)
    printf("palindrome");
    else 
    printf("Not palindrome");
}
int main(){
int n;
scanf("%d",&n);
pal(n);
return 0;
}