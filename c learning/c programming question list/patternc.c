#include <stdio.h>

int main(){
    int k=65;
for(int i=1;i<=5;i++)
{
    for(int j=1;j<=i;j++,k++){
    printf("%c",k);
    }
    printf("\n");
    
}

return 0;
}