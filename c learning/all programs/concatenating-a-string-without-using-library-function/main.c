/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char s[100],str[100];
    int c=0;
    fgets(s,100,stdin);
    for(int i=0;s[i];i++){
     c++;
    }
    printf("Enter the string to be concatenated:");
    scanf("%[^\n]c",str);
    for(int i=c-1,j=0;str[j];i++,j++){
        s[i]=str[j];}
        puts(s);
    return 0;
}

