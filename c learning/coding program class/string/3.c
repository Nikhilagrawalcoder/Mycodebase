#include <stdio.h>

int main(){
    int i,j;
char a[100],b[100],c[100];
scanf("%s",a);
scanf("%s",b);
for( i=0;a[i];i++){
    c[i]=a[i];
    }
for(i, j=0;b[j];i++,j++){
    c[i]=b[j];
}
c[i]='\0';
printf("%s",c);

return 0;
}