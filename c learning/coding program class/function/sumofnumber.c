#include <stdio.h>
#include<math.h>
void sum(int n){
    int s=0;
    int r;
    int w= log10(n)+1;
    for(int i=0;i<w;i++){
        r= n%10;
        s=s+r;
        n=n/10;
    }
    printf("%d",s);
}
int main(){
int n;
scanf("%d",&n);
sum(n);
return 0;
}