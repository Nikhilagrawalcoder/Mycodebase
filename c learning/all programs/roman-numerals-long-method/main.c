#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num;
    scanf("%d",&num);
    int M,D,C,L,X,V,I;
    M=num/1000;
    int m=num%1000;
    D=m/500;
    int d=m%500;
    C=d/100;
    int c=d%100;
    L=c/50;
    int l=c%50;
    X=l/10;
    int x=l%10;
    V=x/5;
    int v=x%5;
    I=v;
    for(int i=0;i<M;i++){
        printf("M");
    }
    for(int i=0;i<D;i++){
        printf("D");
    }
    for(int i=0;i<C;i++){
        printf("C");
    }
    for(int i=0;i<L;i++){
        printf("L");
    }
    for(int i=0;i<X;i++){
        printf("X");
    }
    for(int i=0;i<V;i++){
        printf("V");
    }
    for(int i=0;i<I;i++){
        printf("I");
    }
    
    
    
    return 0;
}