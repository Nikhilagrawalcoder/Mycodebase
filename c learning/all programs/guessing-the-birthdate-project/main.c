#include<stdio.h>
#include<math.h>
int main(){
    printf("I WILL TELL YOUR BIRTHDATE:--\n");
    int a[5]={0};
    char ans[10];
    for(int i=4;i>=0;i--){
        int diff=0;
        for(int k=0;k<16/pow(2,i);k++){
            
            for(int j=pow(2,i)+(k)*diff;j<pow(2,i+1)+(k)*diff;j++){
                printf("%4d ",j);
            }
            diff=pow(2,i)*2;
        }

        printf("\nDoes the above Line contain your birthdate?(Yes or No) :");
        scanf("%s",ans);
        if(ans=="Yes"){
            a[4-i]=1;
        }
        else if(ans=="No"){
            a[4-i]=0;
        }
        printf("\n");
    }
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }

    return 0;
}