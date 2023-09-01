#include <stdio.h>
#define maxmarks100
int main()
{
    float m1, m2, m3, m4, m5;
    printf("enter the value of marks m1");
    scanf("%f", &m1);

    printf("enter the value of marks m2");
    scanf("%f", &m2);
    printf("enter the value of marks m3");
    scanf("%f", &m3);
    printf("enter the value of marks m4");
    scanf("%f", &m4);
    printf("enter the value of marks m5");
    scanf("%f", &m5);

    printf("the total marks of subject is %f\n", m1 + m2 + m3 + m4 + m5);

    printf("the average marks of subject is %f\n", (m1 + m2 + m3 + m4 + m5) / 5);

    printf("the %% of subject is %f\n", (m1 + m2 + m3 + m4 + m5)/500*100);
    

    return 0;
}