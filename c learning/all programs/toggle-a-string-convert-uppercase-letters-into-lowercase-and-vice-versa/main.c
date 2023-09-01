/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
void main()
{
   char str[100],upr[100];
   int i,j=0;
   scanf("%s",str);
   for(i=0;str[i]!='\0';i++,j++){
       if(str[i]>=97)
       upr[j]=(str[i]-32);
       else
       upr[j]=(str[i]+32);
   }
   puts(upr);
}
