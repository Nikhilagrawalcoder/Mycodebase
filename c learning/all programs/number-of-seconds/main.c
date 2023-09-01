/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int hours,minutes,seconds;
   printf("Enter number of seconds:");
   scanf("%d",&seconds);
   hours=seconds/3600;
   seconds=seconds%3600;
   minutes=seconds/60;
   seconds=seconds%60;
   printf("%d,%d,%d",hours,minutes,seconds);
    return 0;
}
