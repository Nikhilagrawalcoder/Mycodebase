#include <stdio.h>

int main()
{

    float r, pi = 3.14;
    printf("enter the radius of circle");
    scanf("%f", &r);
    printf("area of circle is %f\n", pi * r * r);
    printf("diameter of circle is %f\n", 2 * r);
    printf("circumference of circle is %f\n", 2 * pi * r);

    return 0;
}