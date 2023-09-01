#include <stdio.h>
int area(int radius){
    float k = 3.14*radius*radius;
    return k;
}
int diameter(int radius){
    int k= 2*radius;
    return k;
}
int circumference(int radius){
    int k= 2*3.14*radius;
    return k;
}
int main(){
int radius;
scanf("%d",&radius);
int  ar= area(radius);
int diame = diameter(radius);
int circumferen= circumference(radius);
printf("%d %d %d",ar,diame,circumferen);
return 0;
}