#include <stdio.h>
void compare(int *a,int n){
  int max=a[0];
  int min=a[0];
    for(int i=0;i<n;i++){
      if(max<a[i]){
        max=a[i];
      }
      if(min>a[i])
      {
        min=a[i];
      }
    }
    printf("%d %d",max,min);
}
int main(){
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
compare(a,n);
return 0;
}