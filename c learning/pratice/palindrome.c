#include <stdio.h>
#include <string.h>
 
int main()
{
char str[100],k=0;
fgets(str,100,stdin); 
int n= strlen(str);	 
     for(int i=0;i<n;i++){
         str[i]=str[i+k];
if(str[i]==32|| str[i]=='\t'){
    k++;i--;
}
         
     }
     fputs(str,stdout);
    return 0;
}