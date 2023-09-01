#include <stdio.h>

int main(){
int day;
int month,year,weeks;
printf("enter the value of days");
scanf("%d",&day);
year=day/365;
day=day%365;
weeks=day/7;
day=day%7;
printf(" the value of year,month,days is %d year,%dmonth,%dday", year,weeks,day);



return 0;
}