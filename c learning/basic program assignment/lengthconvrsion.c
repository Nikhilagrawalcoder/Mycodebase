#include <stdio.h>

int main()
{
    int cm;
    int km, m;
    printf("enter the value of length in cm");
    scanf("%d", &cm);
    km = cm / 10000;
    cm = cm % 10000;
    m=m/10;
    cm=cm%10;
    printf("the value of length is %d km %d m %d cm",km,m,cm);

    return 0;
}