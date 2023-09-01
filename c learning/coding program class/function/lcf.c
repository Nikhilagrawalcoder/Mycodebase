#include <stdio.h>
void lcm(int a,int b){
    int lcm,hcf;
    int i=1;
    int min;
    if(a>=b)
    min=b;
    else
    min=a;
    for(i;i<=min;i++){
        if(a%i==0&& b%i==0)
        hcf=i;
    }
    lcm= a*b/hcf;
    printf("hcf= %d lcm=%d",hcf,lcm);
}
int main(){
int a,b;
scanf("%d %d",&a,&b);
lcm(a,b);
return 0;
}