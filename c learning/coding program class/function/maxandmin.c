#include <stdio.h>
void compare(int a,int b){
 if(a>b)
 printf("max=%d,min=%d",a,b);
 else
 printf("max=%d,min=%d",b,a);

}
int main(){
int a,b;
scanf("%d %d",&a,&b);
compare(a,b);
return 0;
}