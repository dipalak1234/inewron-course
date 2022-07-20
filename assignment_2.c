/*Assignment 2 operator in c language*/
/*#include<stdio.h> //question 1
int main()
{
	int x,y;
	printf("enter a number\n");
	scanf("%d",&x);
	y=x%10;
	printf("the unit digit of the given number%d is %d\n",x,y);
	return 0;
}*/
/*#include<stdio.h> //question 2
int main()
{
	int x,y;
	printf("enter a number\n");
	scanf("%d",&x);
	y=x/10;
	printf("the given number %d without last digit is %d\n",x,y);
	return 0;
}*/
/*#include<stdio.h> //question 3
int main()
{
	int a,b,c;
	printf("enter the value of a and b for swaping the value\n");
	scanf("%d%d",&a,&b);
	//scanf("%d%d",&a,&b);
	c = b;
	b = a;
	a = c;
	printf("a=%d and b=%d",a,b);
	return 0;
}*/
/*#include<stdio.h>// question 4
int main()
{
	int a,b,c;
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("after swaping the value of a is %d and b is %d",a,b);
	return 0;
}*/
/*#include<stdio.h>// question 5
int main()
{
	int a,b,c,d,e,f;
	printf("Enter a three digit number ");
	scanf("%d",&a);
	b=a%10;
	c=a/10;
	d=c%10;
	e=c/10;
	f=b+d+e;
	printf("The sum of entered 3 digit number is %d",f);
	
}*/
/*#include<stdio.h>//question 6
int main()
{
	char a;
	printf("Enter a character to find it's ascii code:");
	scanf("%c",&a);
	printf("The character %c ascii code is:%d",a,a);
	return 0;
}*/
/*#include<stdio.h> //question 7
int main()
{
	int a,result,count;
	printf("Enter a number to find the position of first 1\n");
	scanf("%d",&a);
	while(a!=0)
	{
		result=a&1;
		count++;
		if(result)
		{
			printf("Position is %d",count);
			break;
		}
		a=a>>1;
	}
	return 0;
}*/
/*#include<stdio.h> //question 8
int main()
{
	int a,b=1;
	printf("Enter a number to check even or odd\n");
	scanf("%d",&a);
		if(a&b)
		printf("Given number is odd");
	else
		printf("Given number is even");
	return 0;
}*/
/*#include<stdio.h>// question 9
int main()
{
	int x1,a;
	float x2,b;
	char x3,c;
	double x4,d;
	x1= sizeof(a);
	x2= sizeof(b);
	x3= sizeof(c);
	x4= sizeof(d);
	printf("%d %f %d %lf",x1,x2,x3,x4);
	return 0;
}*/
/*#include<stdio.h>//question 10
int main()
{
	int a,x;
	printf("enter a number\n");
	scanf("%d",&a);
	x=a%10;
	a=a-x;
	printf("the stored number is %d",a);
	return 0;
}*/
/*#include<stdio.h>//question 11
int main()
{
	int a,b,x;
	printf("enter a number\n");
	scanf("%d",&a);
	printf("enter also a digit\n");
	scanf("%d",&b);
	a=(a*10)+b;
	printf("the resulting number is %d",a);
	return 0;
}*/
/*#include<stdio.h>//question 12
int main()
{
	float b;
	printf("Enter the INR value to convert it to USD\n");
	scanf("%f",&b);
	b=b/76.23;
	printf("The USD value of your INR %.2f",b);
	return 0;
}*/
#include<stdio.h>//question 13 
int main()
{
	int a,b,c;
	printf("Enter a number\n");
	scanf("%d",&a);
	c=(a/10)/10;
	b=a%10;
	a=(a/10)%10;
	a=(c*100)+(b*10)+a;
	printf("The new number is %d",a);
	return 0;
}





















