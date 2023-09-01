#include <stdio.h>
#include<string.h>
int main(){
    int i=0;
char a[100],b[100];
scanf("%s",a);
for( i=0;a[i];i++){
    b[i]=a[i];
}
b[i]='\0';
printf("%s",b);
return 0;
}