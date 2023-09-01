#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],m,ele,pos,i;
    for(i=0;i<n;i++){
    printf("Enter the value of a[i]");
    scanf("%d",&a[i]);}
    printf("Enter the value of m");
    scanf("%d",&m);
    printf("Enter the element to be inserted and it's position");
    scanf("%d%d",&ele,&pos);
    if(m<n){
    for(i=m-1;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos]=ele;
    m++;
    for(i=0;i<m;i++){
        printf("%d",a[i]);}
    }
    else{
        printf("N/A");}
    return 0;
}