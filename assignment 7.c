//Assignment 7 "Iterative Control Statements(Part-2)
/*#include<stdio.h>//Answer of question no 1
int main()
{
	int a,b=0,c=1,i;
	printf("Enter the Nth term to print Fibonaci seris\n");
	scanf("%d",&a);
	if(a==1)
	printf("The %dst term of Fibonaci seris is 1",a);
	for(i=1;i<=a-1;i++)
	{
		if(i%2!=0)
		{
			b=c+b;
			if(i==a-1)
			{
				printf("The %dth term of Fibonaci seris is %d ",a,b);
				break;
			}
		}	
		else
		{
			c=c+b;
			if(i==a-1)
			{
				printf("The %dth term of Fibonaci seris is %d",a,c);
				break;
			}
		}	
	}
	return 0;	
}*/
/*#include<stdio.h>//Answer of question no 2
int main()
{
	int a,b=0,c=1,i;
	printf("Enter the Nth term to print Fibonaci seris up to Nth term\n");
	scanf("%d",&a);
	printf("1 ");
	for(i=1;i<=a-1;i++)
	{
		if(i%2!=0)
		{
			b=c+b;
			printf("%d ",b);
		}	
		else
		{
			c=c+b;
			printf("%d ",c);
		}	
	}
	return 0;	
}*/
/*#include<stdio.h>//Answer of question no 3
int main()
{
	int a,b=0,c=1,i;
	printf("Enter a number to check whether a given number is there in the fibonacci seris or not\n");
	scanf("%d",&a);
	if(a==1)
	printf("This number is in fibonaci seris and it's 1st term\n");
	for(i=1;1==1;i++)
	{
		if(i%2!=0)
		{
			b=c+b;
			if(b>a)
			{
				printf("This number is not in Fibonaci seris");
				break;
			}
			if(b==a)
			{
				printf("This number is in fibonaci seris and it's %dth term",i+1);
				break;
			}
		}	
		else
		{
			c=c+b;
			if(c>a)
			{
				printf("This number is not in Fibonaci seris");
				break;
			}
			if(c==a)
			{
				printf("This number is in fibonaci seris and it's %dth term",i+1);
				break;
			}
		}	
	}
	return 0;	
}*/
/*#include<stdio.h> //Answer of question no 4
int main()
{
	int a,b;
	printf("Enter two number to get HCF\n");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		while(a&&b)
		{	
			a=a%b;
			if(a==0)
			{
				printf("HCF is %d",b);
				break;
			}
			b=b%a;
			if(b==0)
			{
				printf("HCF is %d",a);
				break;
			}
		}
	}
	else
	{
		while(a&&b)//b>a
		{	
			b=b%a;
			if(b==0)
			{
				printf("HCF is %d",a);
				break;
			}
			a=a%b;
			if(a==0)
			{
				printf("HCF is %d",b);
				break;
			}
		}
	}
	return 0;
}*/
/*#include<stdio.h> //Answer of question no 5
int main()
{
	int a,b;
	printf("Enter two number to know they are co-prime or not\n");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		while(a&&b)
		{	
			a=a%b;
			if(a==0)
			{
				if(b==1)
				{		
				printf("The two numbers are co-prime");
				break;	
				}
				else
				printf("The two numbers are not co-prime");
			}
			b=b%a;
			if(b==0)
			{
				if(a==1)
				{		
				printf("The two numbers are co-prime");
				break;	
				}
				else
				printf("The two numbers are not co-prime");
			}
		}
	}
	else
	{
		while(a&&b)//b>a
		{	
			b=b%a;
			if(b==0)
			{
				if(a==1)
				{
					printf("The two numbers are co-prime");
					break;	
				}
				else
				printf("The two numbers are not co-prime");
			}
			a=a%b;
			if(a==0)
			{
				if(b==1)
				{
					printf("The two numbers are co-prime");
					break;
				}
				else
					printf("The two numbers are not co-prime");
			}
		}
	}
	return 0;
}*/
/*#include<stdio.h>
int main() //answer of question no 6
{
	int a,i,j;
	printf("enter a number to print all prime number up to it ");
	scanf("%d",&a);
	if(2<=a)
	printf("2 ");
	for(i=2;i<=a;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				j=i;
			else
			{
				if(j==i-1)
				{
					printf("%d ",i);
					j==i;
				}
			}
		}
	}
	return 0;
}*/
/*#include<stdio.h>
int main() //answer of question no 7
{
	int a,i,j,m;
	printf("enter 2 number randomly as a range to print all prime number between them ");
	scanf("%d%d",&m,&a);
	if(a>m)
	{
		for(i=m;i<=a;i++)
		{
			for(j=2;j<i;j++)
			{
				if(i%j==0)
					j=i;
				else
				{
					if(j==i-1)
					{
						printf("%d ",i);
						j==i;
					}
				}
			}
		}
	}
	else
	{
		for(i=a;i<=m;i++)
		{
			for(j=2;j<i;j++)
			{
				if(i%j==0)
					j=i;
				else
				{
					if(j==i-1)
					{
						printf("%d ",i);
					}
				}
			}
		}
	}	
	return 0;
}*/
/*#include<stdio.h>
int main() //answer of question no 8
{
	int a,i,j,count=0;
	printf("enter a number to find next prime number ");
	scanf("%d",&a);
		for(i=a;i!=0;i++)
		{
			if(count==1)
			break;
			else
			{
				for(j=2;j<i;j++)
			{
				if(i%j==0)
					j=i;
				else
				{
					if(j==i-1)
					{
						count=1;
						printf("%d ",i);
					}
				}
			}	
			}				
		}
	return 0;
}*/
/*#include<stdio.h>//answer of question no 9
int main()
{
	int a,b,c=0,d;
	printf("Enter a number to check it's an armstron number or not\n");
	scanf("%d",&a);
	d=a;
	do
	{
	b=a%10;
	a/=10;
	c=c+b*b*b;
	}
	while(a!=0);
	d==c?printf("It is an Armstrong number"):printf("It is not an armstrong number");
	return 0;	
}*/
/*#include<stdio.h>//answer of question no 10
int main()
{
	int a,b,c=0,d,i,h;
	printf("Enter a number to print armstron numbers upto it\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		h=i;
		d=h;
		c=0;
		while(d!=0)
		{
			b=d%10;
			d/=10;
			c=c+b*b*b;
		}
		if(h==c)
		printf("%d ",c);
	}
	return 0;	
}*/


