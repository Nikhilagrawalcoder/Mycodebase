#include <stdio.h>

int main(){
int i=20;
while(i<=50)
{
    int j=1;
    while(j<=10){
 int n=i*j;
    printf("\t\n%d ",n);
    j++;
    }
    i++;

}
return 0;
}