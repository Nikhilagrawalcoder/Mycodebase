/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
void salting(char pass[]);
int main()
{
    char pass[100];
    scanf("%s",pass);
    salting(pass);
    return 0;
}
void salting(char pass[]){
    char newPass[200] , salt[]="123";
    strcpy(newPass,pass);
    strcat(newPass,salt);
    puts(newPass);
}
