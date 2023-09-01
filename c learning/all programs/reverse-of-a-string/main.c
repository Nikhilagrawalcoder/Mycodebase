/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],newstr[100];
    scanf("%s",str);
    int len=strlen(str);
    int j;
    for(int i=len-1,j=0;i>=0;i--,j++){
        newstr[j]=str[i];
    }
    puts(newstr);
    return 0;
}
