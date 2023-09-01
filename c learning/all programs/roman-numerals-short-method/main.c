#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    char a[7]={'M','D','C','L','X','V','I'};
    int b[7]={1000,500,100,50,10,5,1};
    for(int i=0;i<7;i++){
        for(int j=num/b[i];j>0;j--){
            printf("%c",a[i]);
        }
        num=num%b[i];
    }
    return 0;
}