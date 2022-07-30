//Assignment 6 "Use Any Loop"
/*#include<stdio.h>//  answer of question no 1
int main()
{
	int a,b=0,i;
	printf("Enter a number to get a sum of first N number sum ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		b+=i;
	}
	printf("The sum of first %d numbers is %d",a,b);
	return 0;
}*/
/*#include<stdio.h>//  answer of question no 2
int main()
{
	int a,b=0,i;
	printf("Enter a number to get a sum of first N even natural number sum ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		b+=2*i;
	}	
	printf("The sum of first %d even natural numbers is %d",a,b);
	return 0;
}*/
/*#include<stdio.h>//  answer of question no 3
int main()
{
	int a,b=0,i;
	printf("Enter a number to get a sum of first N odd natural number sum ");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		b+=2*i+1;
	}	
	printf("The sum of first %d odd natural numbers is %d",a,b);
	return 0;
}*/
/*#include<stdio.h>//  answer of question no 4
int main()
{
	int a,b=0,i;
	printf("Enter a number to get a sum of squares of first N number ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		b+=i*i;
	}
	printf("The sum of squares first %d numbers is %d",a,b);
	return 0;
}*/
/*#include<stdio.h>//  answer of question no 5
int main()
{
	int a,b=0,i;
	printf("Enter a number to get a sum of cubes of first N number ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		b+=i*i*i;
	}
	printf("The sum of cubes first %d numbers is %d",a,b);
	return 0;
}*/
/*#include<stdio.h>//  answer of question no 6
int main()
{
	int a,b=1,i;
	printf("Enter a number to get its factorial ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		b*=i;
	}
	printf("The factorial of  %d is %d",a,b);
	return 0;
}*/
/*#include<stdio.h>//answer of question no 7
int main()
{
	int a,i=1;
	printf("enter a number to know its digit\n");//for maximum 10 digit number
	scanf("%d",&a);
	while(1)
	{
		if(a/10==0)
		break;
		else
		{
			a/=10;
			i++;
		}
	}
	printf("the given number is %d digit",i);
	return 0;
}*/
/*#include<stdio.h>
int main() //answer of question no 8
{
	int a,i;
	printf("enter a number to check it prime or not ");
	scanf("%d",&a);
	for(i=2;i<=a;i++)	
	{
		if(a==i)
		printf("It is a prime number");
		else
		{
			if(a%i==0)
			{
				printf("It is not a prime number");
				break;
			}
		}
	}
	return 0;
}*/
/*#include<stdio.h> //answer of question no 9
int main()
{
	int a,b,i,j;
	printf("Enter 2 numbers to get their LCM\n");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		for(i=1;i<=a*b;i++)
		{
			if(i%a==0&&i%b==0)
			{	
				printf("The LCM of this 2 numbers is %d\n",i);
				break;
			}
		}
		if(i==a+1)
		printf("The LCM of this 2 numbers is %d\n",a*b);
	}
	else
	{
		for(i=1;i<=b*a;i++)
		{
			if(i%a==0&&i%b==0)
			{	
				printf("The LCM of this 2 numbers is %d\n",i);
				break;
			}
		}
		if(i==b+1)
		printf("The LCM of this 2 numbers is %d\n",a*b);
	}
	return 0;
}*/
/*#include<stdio.h>//answer of question no 10
int main()
{
	int a,b,c=0;
	printf("Enter a number to reverse it\n");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		a=a/10;
		c=c*10+b;
	}
	printf("%d",c);
	return 0;
}*/

