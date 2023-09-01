#include <stdio.h>

int main(){
char a[100];
scanf("%s",a);
for(int i=0;a[i];i++){
    if(a[i]>='A'&& a[i]<='Z')
    a[i]=a[i]+32;
}
printf("%s",a);
return 0;
}