//Assignment 11 
//More on function in C language
/*#include<stdio.h>//Answer of question no 1
int lcm(int,int);
int main()
{
    int a,b;
    printf("Enter 2 number to get their lcm");
    scanf("%d%d",&a,&b);
    printf("The given number's lcm is %d",lcm(a,b));
    return 0;
}
int lcm(int a,int b)
{
    int c=a,d=b;
	if(a>b)
	{
		while(a&&b)
		{	
			a=a%b;
			if(a==0)
			{
				
                return (c/b)*(d/b)*b;
				break;
			}
			b=b%a;
			if(b==0)
			{
				return (c/a)*(d/a)*a;
				break;
			}
		}
	}
	else
	{
		while(a&&b)
		{	
			b=b%a;
			if(b==0)
			{
                return (c/a)*(d/a)*a;
				break;
			}
			a=a%b;
			if(a==0)
			{
				return (c/b)*(d/b)*b;
				break;
			}
		}
	}
}*/
/*#include<stdio.h>//Answer of question no 2
int hcf(int,int);
int main()
{
    int a,b;
    printf("Enter 2 number to get their hcf");
    scanf("%d%d",&a,&b);
    printf("The given number's hcf is %d",hcf(a,b));
    return 0;
}
int hcf(int a,int b)
{
    int c=a,d=b;
	if(a>b)
	{
		while(a&&b)
		{	
			a=a%b;
			if(a==0)
			{
				
                return b;
				break;
			}
			b=b%a;
			if(b==0)
			{
				return a;
				break;
			}
		}
	}
	else
	{
		while(a&&b)
		{	
			b=b%a;
			if(b==0)
			{
                return a;
				break;
			}
			a=a%b;
			if(a==0)
			{
				return b;
				break;
			}
		}
	}
}*/
/*#include<stdio.h>//Answer of question no 3
int prime(int);
int main()
{
    int a;
    printf("Enter a number to check it is prime or not");
    scanf("%d",&a);
    prime(a)?printf("It is a prime number"):printf("it is not a prime number");
    return 0;
}
int prime(int a)
{
    int i,count = 0;
    if(a==2)
    return 1;
    else
        {
            for(i=2;i<a;i++)
        {
            if(a%i==0)
            {   count = 1;
                return 0;
            }
        }
        if(count)
        return 1;
        }
}*/
/*#include<stdio.h>//Answer of question no 4
int next_prime(int);
int main()
{
    int a;
    printf("Enter a number to check it's next prime number");
    scanf("%d",&a);
    printf("Next prime number of given number is %d",next_prime(a));
    return 0;
}
int next_prime(int a)
{
	int i,j,count=0;
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
						//printf("%d ",i);
						return i;
					}
				}
			}	
			}				
		}
}*/
/*#include<stdio.h>//answer of question no 5
void next_all_prime(int);
int main() 
{
	int a,i,j;
	printf("enter a number to print all prime number up to it ");
	scanf("%d",&a);
	next_all_prime(a);
	return 0;
}
void next_all_prime(int a)
{
	int i,j;
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
}*/
/*#include<stdio.h>//answer of question no 6
void in_the_range_prime(int,int);
int main() 
{
	int a,b;
	printf("enter 2 number randomly as a range to print all prime number between them ");
	scanf("%d%d",&a,&b);
	in_the_range_prime(a,b);
	return 0;
}
void in_the_range_prime(int a,int m)
{	
	int i,j;
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
}*/
/*#include<stdio.h>//Answer of question no 7
void nth_term_fibonacci(int);
int main()
{
	int a;
	printf("Enter the Nth term to print Fibonaci seris up to Nth term\n");
	scanf("%d",&a);
	nth_term_fibonacci(a);
	return 0;
}
void nth_term_fibonacci(int a)
{
	int b=0,c=1,i;
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
}*/
/*#include<stdio.h>//Answer of question no 8
int factorial(int);
int ncr(int,int);
void evenpascal(int,int);
void oddpascal(int,int);
int main()
{
	int a,b;
	printf("Enter a the row of a pascal triangle");
	scanf("%d",&a);
	if(a%2==0)
	evenpascal(a,2*a-1);
	else
	oddpascal(a,2*a-1);
	return 0;
}
int ncr(int a,int b)
{
	int c;
	c=factorial(a)/(factorial(b)*(factorial(a-b)));
	return c;
}
int factorial(int a)
{
	int b=1,i;
	for(i=1;i<=a;i++)
	{
		b=b*i;
	}
	return b;
}
void evenpascal(int x,int y)
{
	int i,j,a=x-1,b=x+1,d;
	for(i=1;i<=x;i++)
	{
		d=0;
		for(j=1;j<=y;j++)
		{
			if(i%2!=0)
			{
				if(j%2==0)
				{
					if(j>a&&b>j)
					{
						printf("%d",ncr(i-1,d));
						d++;		//printf("*");
					}
					else
					printf(" ");
				}
				else
				printf(" ");
			}
			else
			{
				if(j%2!=0)
				{
					if(j>a&&b>j)
					{
						printf("%d",ncr(i-1,d));
						//ncr(i-1,d);
						d++;		//printf("*");
					}
					else
					printf(" ");
				}
				else
				printf(" ");
			}			
		}
		printf("\n");
		a--;
		b++;
	}
}
void oddpascal(int x,int y)
{
	int i,j,a=x-1,b=x+1,d;
	for(i=1;i<=x;i++)
	{
		d=0;
		for(j=1;j<=y;j++)
		{
			if(i%2!=0)
			{
				if(j%2!=0)
				{
					if(j>a&&b>j)
					{
						printf("%d",ncr(i-1,d));
						d++;		//printf("*");
					}
					else
					printf(" ");
				}
				else
				printf(" ");
			}
			else
			{
				if(j%2==0)
				{
					if(j>a&&b>j)
					{
						printf("%d",ncr(i-1,d));
						//ncr(i-1,d);
						d++;		//printf("*");
					}
					else
					printf(" ");
				}
				else
				printf(" ");
			}			
		}
		printf("\n");
		a--;
		b++;
	}
}*/
/*#include<stdio.h>//Answer of question no 9
int square(int);
int main()
{
	int a;
	printf("Enter a number to get it's square");
	scanf("%d",&a);
	printf("The square of %d is %d",a,square(a));
	return 0;
}
int square(int a)
{
	int b;
	b=a*a;
	return b;
}*/
/*#include<stdio.h>//Answer of question no 10
int factorial(int a);
int seris(int a);
int main()
{
	int a;
	printf("Enter the number to get up to the given seris in queston no 10 ");
	scanf("%d",&a);
	printf("The sum of the seris is %d",seris(a));
	return 0;
}
int seris(int a)
{
	int i,b=0;
	for(i=1;i<=a;i++)
	{
		b=(factorial(i)/i)+b;
	}
	return b;
}
int factorial(int a)
{
	int b=1,i;
	for(i=1;i<=a;i++)
	{
		b=b*i;
	}
	return b;
}*/
