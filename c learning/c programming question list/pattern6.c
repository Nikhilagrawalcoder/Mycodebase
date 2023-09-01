#include <stdio.h>

int main(){
    int n=5;
for(int i=1;i<=5;i++){
for(int j=4;j>=i;j--){
printf(" ");
}
for(int k=1;k<=i;k++)
printf("%d",n);
n--;
printf("\n");
}

return 0;
}