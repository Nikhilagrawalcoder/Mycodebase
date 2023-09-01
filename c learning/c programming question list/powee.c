#include <stdio.h>
int main(){
char x;
printf("input");
scanf("%c",&x);
switch(x)
{
    case'a':
    case'A':
    case'e':
    case'E':
    case'i':
    case'I':
    case'o':
    case'O':
    case'u':
    case'U':
    printf("%c is a vowel",x);
    break;
    default:
    printf("%c is a consonant",x);
}
return 0;
}