//assignment 3 decision control statement
/*#include<stdio.h> //question 1
int main()
{
	int a;
	printf("enter a number\n");
	scanf("%d",&a);
	if(a<=0)
	printf("the number is non positive");
	else
	printf("the number is positive");
	return 0;
}*/
/*#include<stdio.h> //question 2
int main()
{
	int a;
	printf("enter a number to check it's divisible by 5 or not\n");
	scanf("%d",&a);
	if(a%5==0)
	printf("the number is devisible by 5");
	else
	printf("it's not divisible by 5");
	return 0;
}*/
/*#include<stdio.h> //question 3
int main()
{
	int a;
	printf("enter a number to check it is even or odd\n");
	scanf("%d",&a);
	if(a%2==0)
	printf("the number is even");
	else
	printf("the number is odd");
	return 0;
}*/
/*#include<stdio.h> //question 4
int main()
{
	int a;
	printf("enter a number to check it is even or odd\n");
	scanf("%d",&a);
	if(a&1==1)
	printf("the number is odd");
	else
	printf("the number is even");
	return 0;
}*/
/*#include<stdio.h> //question 5
int main()
{
	int a,b,c,d;
	printf("enter a number to check it is a three digit number or not\n");
	scanf("%d",&a);
	b=a/10;b/=10;
	c=a/10;c/=10;c/=10;
	a=a/10;a/=10;a/=10;a/=10;
	if(b>0)
	{
		if(c>0||a>0)
			printf("the number is not 3 digit");
		else
			printf("the number is 3 digit");
	}
	else
	printf("the number is not 3 digit");
	return 0;
}*/
/*#include<stdio.h> //question 6
int main()
{
	int a,b;
	printf("enter two number to check which is greater\n");
	scanf("%d%d",&a,&b);
	if(a>b)
	printf("the number %d is greater than %d",a,b);
	else
	{
		if(a==b)
		printf("number of both are the same");	
		else
		printf("the number %d is greater than %d",b,a);
	}
	return 0;
}*/
/*#include<stdio.h> //question 7
int main()
{
	int a,b,c;
	printf("enter the roots of a quadratic equation\n");
	scanf("%d%d%d",&a,&b,&c);
	if(b*b==4*a*c)
	printf("the roots are real & equal");
	else
	{	if(b*b>4*a*c)
		printf("the roots are real & distinct");
		else
		printf("the roots are imaginary");
	}
	return 0;
}*/
/*#include<stdio.h> //question 8
int main()
{
	int a;
	printf("enter a year to check it is leap year or not\n");
	scanf("%d",&a);
	if(a%4==0||a%400==0)
	printf("the year is leap year");
	else
	printf("the year is not leap year");
	return 0;
}*/
/*#include<stdio.h> //question 9
int main()
{
	int a,b,c;
	printf("enter three number to check which is greater among them\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c&&c==a)
	{
		printf("entered 3 numbers are same");
	}
	else
	{
		if(a==b||b==c||c==a)
		{
			printf("entered 2 numbers are same\n");
			if(a!=b)
				(a>b)?printf("a & c are equal they are grater than b"):printf("b & c are equal and they both grater than a");
			else
				(b>c)?printf("b is greatest among them & a and c are equal"):printf("c is greater among them and a & b are equal");	
		}
		else
		{
			if(a>b)
				(a>c)?printf("a is the greatest"):printf("c is the greatest");	
			else
			{
				(b>c)?printf("b is the greatest"):printf("c is the greatest");
			}
		}
		
	}
	
	return 0;
}*/
/*#include<stdio.h> //question 10
int main()
{
	
	float a,b,c;
	printf("enter cost and selling price of the product\n");
	scanf("%f%f",&a,&b);
	if(a>b)
	printf("the product are in loss and the loss is %.2f%%",c=((a-b)/a)*100);
	else
	printf("the product are in gain and the gain is %.2f%%",c=((b-a)/a)*100);
	return 0;
}*/
/*#include<stdio.h> //question 11
int main()
{
	float a,c,d,e,f;
	printf("bengali marks= ");
	scanf("%f",&a);
	printf("math marks= ");
	scanf("%f",&c);
	printf("science marks= ");
	scanf("%f",&f);
	printf("history marks= ");
	scanf("%f",&d);
	printf("geographty marks= ");
	scanf("%f",&e);
	if((a+c+d+e+f)/5<=33)
	printf("the student is fail");
	else
	{	
		(a>=33&&c>=33&&d>=33&&e>=33&&f>=33)?printf("the student is pass"):printf("the student is fail");	
	}
	return 0;
}*/
/*#include<stdio.h>//question 12
int main()
{
	char a;
	int b;
	printf("enter a alphabet to find it uppercase or lower ");
	scanf("%c",&a);
	b=a;
	if(65<=b&&b<=96)
	printf("the alphabet is in uppercase");
	else
	printf("the alphabet is in lowercase");
	return 0;
}*/
/*#include<stdio.h> //question 13
int main()
{
	int a;
	printf("enter a number to check the number is divisible by 2 and 3\n");
	scanf("%d",&a);
	(a%2==0&&a%3==0)?printf("the number is devisible by 2 and 3"):printf("the number is not devisible by 2 and 3");
	return 0;
}*/
/*#include<stdio.h> //question 14
int main()
{
	int a;
	printf("enter a number to check the number is divisible by 7 or 3\n");
	scanf("%d",&a);
	(a%7==0||a%3==0)?printf("the number is devisible by 7 or 3"):printf("the number is not devisible by 7 or 3");
	return 0;
}*/
/*#include<stdio.h> //question 15
int main()
{
	float a;
	printf("enter a number to check the number is positive negetive or zero\n");
	scanf("%f",&a);
	if(a>0)
		printf("the number is positive");
	else
		(a<0)?printf("the number is negative"):printf("the number is zero");
	return 0;
}*/
/*#include<stdio.h>//question 16
int main()
{
	char a;
	int b;
	printf("enter a character to find it uppercase or lower or digit or a special character ");
	scanf("%c",&a);
	b=a;
	if(65<=b&&b<=96)
	printf("the alphabet is in uppercase");
	else
	{
		if(97<=b&&b<=122)
		printf("the alphabet is in lowercase");
		else
		(48<=b&&b<=57)?printf("this is a digit"):printf("this is a special character");
	}
	
	return 0;
}*/
/*#include<stdio.h> //question 17
int main()
{
	float a,b,c;
	printf("enter the sides of a triangle\n");
	scanf("%f%f%f",&a,&b,&c);
	(a+b>c&&a+c>b&&b+c>a)?printf("the tiangle is valid"):printf("the tiangle is not-valid");
	return 0;
}*/
/*#include<stdio.h> //question 18
int main()
{
	int a;
	printf("enter month number to check which month have how many days \n");
	scanf("%d",&a);
	if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
	printf("this month have 31 days");
	else
	(a==2)?printf("this month have 28 days but it would be 29 days in leap years"):printf("this month have 30 days");
	return 0;
}*/





