/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int m1,m2,m3,m4,m5;
    float tot,avg,per;
    printf("Enter marks of first subject\n");
    scanf("%d",&m1);
    printf("Enter marks of second subject\n");
    scanf("%d",&m2);
    printf("Enter marks of third subject\n");
    scanf("%d",&m3);
    printf("Enter marks of fourth subject\n");
    scanf("%d",&m4);
    printf("Enter marks of fifth subject\n");
    scanf("%d",&m5);
    tot=m1+m2+m3+m4+m5;
    avg=tot/5;
    per=tot/5;
    printf("Total of marks=%f\n",tot);
    printf("Average of marks=%f\n",avg);
    printf("Percentage of marks=%f%%\n",per);
    }
