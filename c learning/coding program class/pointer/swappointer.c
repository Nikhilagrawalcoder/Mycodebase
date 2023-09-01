#include <stdio.h>

int main(){
int n,*temp;
scanf("%d",&n);
int a[n],b[n];
int (*p)[n]=&a;
int  (*q)[n]= &b;
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
for(int i=0;i<n;i++){
    scanf("%d",&b[i]);
}
for(int i=0;i<n;i++){
 temp=  (* p)[i];
 (*p)[i]= (*q)[i];
 (*q)[i]=temp;

}
for(int i=0;i<n;i++)
{
    printf("%d",a[i]);
}
printf("\n");
for(int i=0;i<n;i++){
    printf("%d",b[i]);
}
return 0;
}