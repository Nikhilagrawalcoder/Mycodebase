/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
void VowelCount(char ch[]);
int main()
{
    char str[100];    
    fgets(str,100,stdin);
    VowelCount(str);
    return 0;
}
void VowelCount(char ch[]){
    int i,count=0;
    for(i=0;ch[i]!='\0';i++){
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
        count++;}
    printf("Total number of vowels=%d",count);
}