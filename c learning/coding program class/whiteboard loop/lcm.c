#include <stdio.h>

int main(){
int n,m;
scanf("%d %d",&n,&m);
int min,hcf,lcm;
if(n>=m)
min=m;
else 
min=n;
for(int i=1;i<=min;i++){
    if(m%i==0&& n%i==0){
        hcf=i;
    }

}
lcm= (m*n)/hcf;
printf("%d %d",hcf,lcm);
return 0;
}