#include<stdio.h>
void main(){
    float length,width,area,parameter;
    printf("enter the length: ");
    scanf("%f",&length);
    printf("enter the width: ");
    scanf("%f",&width);
   
    area = (length*width);
    parameter = 2*(length+width);
    printf("%f\n",area);
    printf("%f\n",parameter);
}