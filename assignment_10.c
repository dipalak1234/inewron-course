//Assignment 10 Function in c language
/*#include<stdio.h>//answer of quesiton no 1
float area(float);
int main()
{
	float radius;
	printf("enter the radius of a circle\n");
	scanf("%f",&radius);
	printf("the area of the cirle is %.2f",area(radius));
	return 0;
}
float area(float r)
{
	float a;
	a=3.14*r*r;
	return a;
}*/
/*#include<stdio.h>//answer of quesiton no 2
float si(float,float,float);
int main()
{
    float sum, year, rate;
    printf("Enter sum year and rate of interest\n");
    scanf("%f%f%f",&sum,&year,&rate);
    printf("The simple inerest is %.2f",si(sum,year,rate));
    return 0;
}
float si(float a,float b,float c)
{
    float si;
    si=(a*b*c)/100;
    return si;
}*/
/*#include<stdio.h>//answer of quesiton no 3
int evenodd(int);
int main()
{
        int a;
        printf("Enter a number to check it even or odd\n");
        scanf("%d",&a);
        printf("if value shows 1 it's even otherwise 0\n %d",evenodd(a));
    return 0;
}
int evenodd(int a)
{
    if(a%2==0)
    return 1;
    else
    return 0;
}*/
/*#include<stdio.h>//answer of quesiton no 4
void print_n_number(int);
int main()
{
    int a;
    printf("Enter a number to print n natural number\n");
    scanf("%d",&a);
    print_n_number(a);
    return 0;

}
void print_n_number(int a)
{
   int i;
   for(i=1;i<=a;i++)
   {
    printf("%d ",i);
   }
}*/
/*#include<stdio.h>//answer of quesiton no 5
void print_n_number(int);
int main()
{
    int a;
    printf("Enter a number to print n odd natural number\n");
    scanf("%d",&a);
    print_n_number(a);
    return 0;

}
void print_n_number(int a)
{
   int i,j;
   for(i=1;i<=2*a;i++)
   {
    if(i%2!=0)
    printf("%d ",i);
   }
}*/
/*#include<stdio.h>//answer of quesiton no 6
double factorial(double);
int main()
{
    double a;
    printf("Enter a number to print it's factorial\n");
    scanf("%lf",&a);
    printf("The factorial of %.0lf is %.0lf",a,factorial(a));
    return 0;

}
double factorial(double a)
{
    double result=1,i;
  for(i=1;i<=a;i++)
  {
    result=result*i;
  }
  return result;
}*/
/*#include<stdio.h>//answer of quesiton no 7
double combination(double,double);
double factorial(double);
int main()
{
    double n,r;
    printf("Enter n to get the combination if r items are selected\n");
    scanf("%lf%lf",&n,&r);
    printf("The combination is %.0lf",combination(n,r));
    return 0;

}
double combination(double n,double r)
{
  double c,d,e,f;
  c=factorial(n);
  d=factorial(r);
  e=factorial(n-r);
  f=c/(d*e);
  return f;
}
double factorial(double a) 
{
    double result=1,i;
  for(i=1;i<=a;i++)
  {
    result=result*i;
  }
  return result;
}*/
/*#include<stdio.h>//answer of quesiton no 8
double arrangements(double,double);
double factorial(double);
int main()
{
    double n,r;
    printf("Enter n to get the arrangements if r items are selected\n");
    scanf("%lf%lf",&n,&r);
    printf("The arrangements is %.0lf",arrangements(n,r));
    return 0;

}
double arrangements(double n,double r)
{
  double c,d,f;
  c=factorial(n);
  d=factorial(n-r);
  f=c/d;
  return f;
}
double factorial(double a) 
{
    double result=1,i;
  for(i=1;i<=a;i++)
  {
    result=result*i;
  }
  return result;
}*/
/*#include<stdio.h>//answer of quesiton no 9
int checking(int, int);
int main()
{
	int a,b;
	printf("Enter a number\n");
	scanf("%d",&a);
	printf("Enter a digit to check it contains the given number or not\n");
	scanf("%d",&b);
	if(checking(a,b)==1)
	printf("It contains");
	else
	printf("It not contains");
	return 0;
}
int checking(int a, int b)
{
	int c;
	while(a!=0)
	{
		c=a%10;
		a=a/10;
		if(c==b)
		{
		return 1;
		break;
		}
	}
}*/
/*#include<stdio.h>//answer of quesiton no 10
void factor(int);
int prime(int);
int main()
{
	int a,b;
	printf("Enter a number to know it's prime factors\n");
	scanf("%d",&a);
	factor(a);
	return 0;
}
void factor(int a)
{
	int b,i,j,count;
	b=a;
	for(i=2;i<=b;i++)
	{
		count=0;
		for(j=2;j<=i;j++)
		{
			if(count!=1)
			{		if(a%j==0)
					{
						count=1;
						if(prime(j))
						printf("%d ",j);
						a/=j;
					}
			}
		}
		if(a==0)
		break;
	}	
}
int prime(int a)
{
	int i,b=1;
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			return 0;
			b=0;
			break;
		}
	}
	if(b==1)
	return 1;
}*/

