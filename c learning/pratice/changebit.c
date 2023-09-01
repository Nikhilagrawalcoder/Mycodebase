#include <stdio.h>

int main(){
int num,n,newnum;
scanf("%d %d",&n,&num);
newnum= (1<<n)|num;
printf("%d",newnum);
return 0;
}