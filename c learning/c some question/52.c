#include<stdio.h>
void main(){
    int n,q;
    scanf("%d %d",&n,&q);
    for(int i = 0 ;i<q ;i++){
        int k;
        char o;
        scanf("%c %d",&o,&k);
        int op = o;
        switch(op){
            case '+':n = n + k ;break;
            case '-':n = n - k;break;
            case '/':n = n / k;break;
            case '*':n = n * k;break;
            case '^':n = n ^ k;break;
        }
    }
    printf("%d\n",n);
}