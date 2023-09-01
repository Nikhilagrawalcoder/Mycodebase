#include <stdio.h>
#include<math.h>
int power(int a,int b){
int k= pow(a,b);
return k;
}
int main(){
int a,b;
scanf("%d %d",&a,&b);
int powe= power(a,b);
printf("%d",powe);
return 0;
}