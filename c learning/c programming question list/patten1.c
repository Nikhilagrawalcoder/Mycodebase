#include <stdio.h>

int main(){
int n;
printf("enter the value of n");
scanf("%d",&n);
int i;
for(i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
    printf("%d",i);
    }
    printf("\n");
}
return 0;
}
