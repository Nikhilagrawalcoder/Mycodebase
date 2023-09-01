#include <stdio.h>
void compare(int a){
 if(a%2==0)
 printf("even");
 else
 printf("odd");

}
int main(){
int a;
scanf("%d",&a);
compare(a);
return 0;
}