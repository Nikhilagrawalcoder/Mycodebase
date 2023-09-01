/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,c=0,ele;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);}
        scanf("%d",&ele);
        for(i=0;i<n;i++){
            if(a[i]==ele){
            c++;
            break;}
        }
            if(c==0){
                printf("Not found.");}
                else{
                    for(i=0;i<n;i++){
                        if(a[i]==ele)
                        break;}
                        printf("%d\n%d",a[i+1],a[i-1]);}
    return 0;
}