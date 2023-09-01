#include <stdio.h>

int main(){
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);

}
for(int i=0;i<n-1;i++){
    if(a[i]>a[i+1]){
        int temp= a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
}
int count =0;
int max =0;
for(int i=0;i<n-1;i++)
{
    if(a[i] = a[i]+1)
    count++;
    else{
        if(count>max)
        {
            max = count +1;
            count =0;
        }
    }
}
for(int i=n-1;i>=0;i--)
{
     if(a[i]-1 != a[i-1])
        {
           if(count>max)
           max =count;
           break;
        }
         count++;
}

printf("%d\n",max);
return 0;
}