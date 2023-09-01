#include <stdio.h>

int main(){
    int c=0;
char string[100];
scanf("%s",string);
for(int i=0;string[i];i++){
    c++;
}
printf("%d",c);
return 0;
}