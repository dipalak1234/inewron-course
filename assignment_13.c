//Assignment 13 - More on Recursion in C language
/*#include<stdio.h>//Answer of question no 1
int firstNsum(int);
int main()
{
    int a;
    printf("Enter a number to sum upto it\n");
    scanf("%d",&a);
    printf("The sum of first %d numbers is %d",a,firstNsum(a));
    return 0;
}
int firstNsum(int a)
{   int s;
    if(a==1)
    return 1;
    s=a+firstNsum(a-1);
    return s;
}*/
/*#include<stdio.h>//Answer of question no 2
int firstNodd(int);
int main()
{
    int a;
    printf("Enter n to calculate sum of first n odd natural number\n");
    scanf("%d",&a);
    printf("The sum of first %d numbers is %d",a,firstNodd(a-1)+1);
    return 0;
}
int firstNodd(int n)
{
    int s;
   if(n==0)
   return 0;
   s=(2*n+1)+firstNodd(n-1);
   return s;
}*/
/*#include<stdio.h>//Answer of question no 3
int firstNeven(int);
int main()
{
    int a;
    printf("Enter n to calculate sum of first n even natural number\n");
    scanf("%d",&a);
    printf("The sum of first %d numbers is %d",a,firstNeven(a));
    return 0;
}
int firstNeven(int n)
{
    int s;
   if(n==0)
   return 0;
   s=(2*n)+firstNeven(n-1);
   return s;
}*/
/*#include<stdio.h>//Answer of question no 4
int sqr(int);
int main()
{
    int a;
    printf("Enter n to calculate sum of first n squre of natural number\n");
    scanf("%d",&a);
    printf("The sum of first %d numbers is %d",a,sqr(a));
    return 0;
}
int sqr(int n)
{
    int s;
   if(n==0)
   return 0;
   s=(n*n)+sqr(n-1);
   return s;
}*/
/*#include<stdio.h>//Answer of question no 5
int sumdigit(int);
int main()
{
    int a;
    printf("Enter a number to calculate sum of it's digit\n");
    scanf("%d",&a);
    printf("The sum of the digit %d is %d",a,sumdigit(a));
    return 0;
}
int sumdigit(int n)
{
    int s,b;
   if(n==0)
   return 0;
   b=n%10;
   n=n/10;
   s=b+sumdigit(n);
   return s;
}*/
/*#include<stdio.h>//Answer of question no 6
int fact(int);
int main()
{
    int a;
    printf("Enter a number to calculate it's factorial\n");
    scanf("%d",&a);
    printf("The factorial of %d is %d",a,fact(a));
    return 0;
}
int fact(int a)
{
    int s;
    if(a==0)
    return 1;
    s=a*fact(a-1);
    return s;
}*/
/*#include<stdio.h>//Answer of question no 7
int hcf(int,int);
int main()
{
    int a,b;
    printf("Enter 2 numbers to get their HCF\n");
    scanf("%d%d",&a,&b);
    printf("The HCF of %d and %d is %d",a,b,hcf(a,b));
    return 0;
}
int hcf(int a, int b)
{ 
    int c;
    if(a>b)
    {   
        c=a%b;
        if(c==0)
        return b;
        else
        hcf(b,c);
    }
    else
    {
        c=b%a;
        if(c==0)
        return a;
        else
        hcf(a,c);
    }
}*/
/*#include<stdio.h>//Answer of question no 8
int fibo(int);
void seris(int);
int main()
{
int a;
printf("Enter a number to print fibonacci seris");
scanf("%d",&a);
printf("0 ");
seris(a-1);
return 0;
}
int fibo(int a)
{
    if(a==1||a==0)
    return a;
    return fibo(a-1)+fibo(a-2);
}
void seris(int a)
{
    int b=1;
    while(b<=a)
    {
        printf("%d ",fibo(b));
        b++;
    }
}*/
/*#include<stdio.h>//Answer of question no 9
int count(int);
int main()
{
int a,b,c;
printf("Enter a number to count it's degit\n");
scanf("%d",&a);
printf("%d",count(a)-1);
return 0;
}
int count(int a)
{
	
	int c;
	if(a==0)
	return 1;
	a=a/10;
	c=1+count(a);
	return c;
}*/
/*#include<stdio.h>//Answer of question no 10
int power(int,int);
int main()
{
	int a,b;
	printf("Enter a number to get its power\n");
	scanf("%d",&a);
	printf("Enter power value\n");
	scanf("%d",&b);
	printf("Answer is %d",power(a,b));
	return 0;
}
int power(int a, int b)
{
	int c;
	if(b==0)
	return 1;
	c=a*power(a,b-1);
	return c;	
}*/
