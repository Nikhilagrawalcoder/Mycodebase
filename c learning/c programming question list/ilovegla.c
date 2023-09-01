#include <stdio.h>

int main(){
    for(int i=1;i<=5;i++)
    {
        for(int j=65;j<65+i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }

return 0;
}