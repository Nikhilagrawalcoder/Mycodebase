Sheet-3 (Control Statement) 
1.	#include<stdio.h>
 main()
	   {
		int a=10,b=20;
		if(a==b)
		  printf("a=10,b=20");
		  printf("a and b are not equal");
	   }


2.	 #include<stdio.h>
main()
	   {
		int a=10,b=20;
		if(a==b)
		{
		  printf("a=10,b=20");
		  printf("a and b are not equal");
		}
	   }

3.	#include<stdio.h>
 main()
	   {
		int a=10,b=20;
		if(a=b)
		  printf("a and b are equal");
		else
		  printf("a and b are not equal");
	   }

4.	#include<stdio.h>
main()
	   {
		int a=10,b=20;
		if(a==b);
		  printf("a and b are equal");
		else
		  printf("a and b are not equal");
	   }

5.		#include<stdio.h>
 main()
	   {
		int a=10,b=20;
		if(a=b)
		  printf("a and b are equal\n");
		else;
		  printf("a and b are not equal\n");
	   }

6.	#include <stdio.h>
int main()
{
   if(!3.14)
   printf("I have robbed and killed..");
   else
   printf("Until my evil purse was filled..");
    return 0;
}

7.	#include <stdio.h>
int main()
{
    int i;
    if (printf("0"))
        i = 3;
    else
        i = 5;
    printf("%d", i);
    return 0;
}

8.	   #include <stdio.h>
int main()
{
   if('Z'<'z')
   printf("I have robbed and killed..");
   else
   printf("Until my evil purse was filled..");
    return 0;
}

9.		#include<stdio.h>
 main()
	   {
		if(1)
		  printf("This will always get excuted");
		else
		  printf("This will never get excuted");
	   }

10.	#include <stdio.h>
int main()
{
 int x=10;
   if x>=2
   printf("I heve robbed and killed..");
   else
   printf("Until my evil purse was filled..");
    return 0;
}

11.	#include <stdio.h>
int main()
{
    int i=10,j=40;
    if((j-i)% 10)
    printf("man sees your actions..");
    else
    printf("god sees your motives..");
    return 0;
}

12.	#include <stdio.h>
int main()
{
    int i=400000 * 400000 / 400000;
    if(i==400000)
    printf("Hello India..");
    else
    printf("Hello World..");
    return 0;
}

13.		#include<stdio.h>
 main()
	   {
		if(printf("Hello"))
		  printf("Students");
	   }

14.	#include<stdio.h>
 main()
	    {
		int a=10,b=20;
		if(a==10)
		if(b==10)
		printf("Value of a and bis 10");
		else
	printf("Value of a is 10 and b is something else");
	    }

15.	#include<stdio.h>
main()
	    {
		int a=10,b=20;
		if(a==10)
		{
		if(b==10)
		  printf("Value of a and bis 10");
		}
		else
	 printf("Value of a is 10 and b is something else");
	    }

16.	#include <stdio.h>
int main()
{
    int x=10,y=20;
    if(!(!x) && x)
    printf("x= %d",x);
    else
    printf("y= %d",y);
    return 0;
}

17.	#include <stdio.h>
int main()
{
   int x=100;
    if(!!x)
    printf("x= %d",!x);
    else 
    printf("x= %d",x);
    return 0;
}
18.	#include <stdio.h>
int main()
{
   int i=10;
    if(i==10)
    ;
    else 
    printf("hello usa");
    return 0;
}

19.	#include <stdio.h>
int main()
{
    float a=0.5,b=0.9;
    if(a &&  b>=0.9)
    printf("I am a boy..");
    else 
    printf("I am a girl..");
    return 0;
}
20.	#include<stdio.h>
  main()
	   {
	       int a=300,b=10,c=20;
		if(!(a>=400))
		b=300;
		c=200;
		printf("b= %d, c= %d",b,c);
	   }

21.	#include<stdio.h>
  main()
	   {
	 int a=300,b=10,c;
	if(!(a>=40))
	b=300;
	c=200;
	printf("b= %d, c= %d",b,c);
	   }
22.	#include<stdio.h>
  main()
	   {
	 int a=10,b=100 % 90;
		if(a!=b);
		printf("a= %d, b= %d",a,b);
	   }
	
23.	#include <stdio.h>
int main()
{
    int x = 3;
    if (x == 2); x = 0;
    if (x == 3) x++;
    else
    x += 2;
    printf("x = %d", x);
    return 0;
}
24.	#include <stdio.h>
int main() 
{ 
  int a = 10, b = 20, c = 30; 
  if (c > b > a) 
    printf("TRUE"); 
  else
    printf("FALSE"); 
  return 0; 
}

25.	#include<stdio.h>
void main(){
int a=0,b=10;
if(a++||++b)
printf("%d  %d",a,b);
else
printf("john terry");
}
26.	 #include <stdio.h>
int main()
    {
int x = 0;
if (x++)
printf("true\n");
else if (x == 1)
printf("false\n");
    }
27.	   #include <stdio.h>
int main()
    {
int x = 1;
int y =  x == 1 ? getchar(): 2;
printf("%d\n", y);
    }
Ans:- print ascii value 

28.	main()
{
int a=20,b=3;
if(a<10)
a=a-5;
b=b+5;
printf(“%d%d”,a,b);
}

29.	   main()
            {
int i=1,j=9;
if(i>=5 && j<5);
i=j+2;
printf(“%d”,i);
}

30.	   main()
{
int a=0,b=0;
if(!a)
{
b=!a;
if(b)
a=!b;
printf(“%d%d”,a,b);
}

31.	  main()
{
int a=5;
begin:
if(a)
{
printf(“%d”,a);
a--;
goto begin;
}
}
32.	   main()
{
int a=5;
begin:
if(a)
printf(“%d”,a);
a--;
goto begin;
}
33.	#include<stdio.h>
int main()
{
    char ch;
    if(ch = printf(""))
        printf("It matters\n");
    else
        printf("It doesn't matters\n");
    return 0;
}
34.	 What is the output of this C code?
main()
{
int i=9;
if(i==9)
{
int i=25;
}
printf(“%d”, i);
}


