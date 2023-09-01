#include <stdio.h>

int main(){
    int c=0,n=0;
char a[100],b[100];
scanf("%s",a);
scanf("%s",b);
for(int i=0;a[i];i++){
    c++;
}
for(int i=0;b[i];i++){
    n++;
}
if(c==n){
    
for(int i=0;a[i];i++){
    if(a[i]>b[i]){
        printf("first string is greater");
        break;
    }
    else if(b[i>a[i]]) {
    printf("second string is greater");
    break;
    }
}
}
else {
    printf("string length is not equal");
}

return 0;
}