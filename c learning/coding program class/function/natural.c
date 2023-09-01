#include <stdio.h>
void nat(int n){
    for(int i=1;i<=n;i++){
        printf("%d\n",i);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    nat(n);
return 0;
}