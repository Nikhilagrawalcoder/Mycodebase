#include<iostream>
using namespace std;
typedef struct point{
int x;
int y;
}p;
int main(){
p p;
p.x=10;
p.y=20;
cout<<p.x<<" "<<p.y;
return 0;
}