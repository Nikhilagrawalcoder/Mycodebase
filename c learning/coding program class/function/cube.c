#include <stdio.h>
#include<math.h>
int cube(int n)
{
 int w= pow(n,3);
  return w;
}
int main(){
int a;
scanf("%d",&a);
int k= cube(a);
printf("%d",k);


return 0;
}