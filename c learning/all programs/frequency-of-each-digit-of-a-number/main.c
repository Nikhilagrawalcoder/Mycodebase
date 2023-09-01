/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int n,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,r;
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        if(r==1)
        a++;
        else if(r==2)
        b++;
        else if(r==3)
        c++;
        else if(r==4)
        d++;
        else if(r==5)
        e++;
        else if(r==6)
        f++;
        else if(r==7)
        g++;
        else if(r==8)
        h++;
        else
        i++;
        n=n/10;
    }
    printf("Frequency of digits 1,2,3,4,5,6,7,8,9 in the number is %d,%d,%d,%d,%d,%d,%d,%d,%d",a,b,c,d,e,f,g,h,i);
    return 0;
}