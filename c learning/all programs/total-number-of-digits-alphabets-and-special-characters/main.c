/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char ch[100];
    int i,c=0,d=0,e=0;
    scanf("%[^\n]c",ch);
    for(i=0;ch[i];i++){
        if(ch[i]>=48&&ch[i]<=57){
        d++;}
        else if((ch[i]>=65&&ch[i]<=90)||(ch[i]>97&&ch[i]<=122)){
        c++;}
        else{
        e++;}
    }
    printf("Total no of digits=%d\n",d);
    printf("Total no of alphabets=%d\n",c);
    printf("Total no of special characters=%d\n",e);
    return 0;
}

