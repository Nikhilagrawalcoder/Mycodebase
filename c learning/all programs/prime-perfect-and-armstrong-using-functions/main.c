/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    int n,c=0,i,s=0,d,r;
    scanf("%d",&n);
    int ch;
    printf("Enter your choice: 1 for prime,2 for perfect and 3 for armstrong");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        for(i=1;i<=n;i++){
            if(n%i==0)
            c++;
        }
        if(c==2)
        printf("Prime");
        else
        printf("Not");
        break;
        case 2:
        for(i=1;i<=n/2;i++)
        {
            if(n%i==0)
            s+=i;
        }
        if(s==n)
        printf("Perfect");
        else
        printf("Not");
        break;
        case 3:
        d=log10(n)+1;
        while(n>0){
            r=n%10;
            s+=(pow(r,d--));
            n=n/10;
        }
        if(s==n)
        printf("Armstong");
        else
        printf("Not");
        break;
        default:printf("Invalid choice");
    }
    return 0;
}
