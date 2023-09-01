#include <stdio.h>
void evod(int n){
    int i=1;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            printf(
            "%d\n",i
            );
        }
    }
}
int main(){
int n;
scanf("%d",&n);
evod(n);
return 0;
}