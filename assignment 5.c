//assignment 5 "More on iterative Control Statement"
/*#include<stdio.h>
int main() //question no 1
{
	int a,i=1;
	printf("how many times you want to print My SirG\n");
	scanf("%d",&a);
	while(a>=i)
	{
		printf("My SirG\n");
        i++;
	}
	return 0;
}*/
/*#include<stdio.h>
int main() //question no 2
{
	int a,i=1;
	printf("Enter N to print N naturel numbers\n");
	scanf("%d",&a);
	while(a>=i)
	{
		printf("%d ",i);
        i++;
	}
	return 0;
}*/
/*#include<stdio.h>
int main() //question no 3
{
	int a,i=1;
	printf("Enter N to print N naturel numbers in reverse order\n");
	scanf("%d",&a);
	while(a>=i)
	{
		printf("%d ",a);
        a--;
	}
	return 0;
}*/
/*#include<stdio.h>
int main() //question no 4
{
	int a,i=1,j=1;
	printf("Enter N to print first N odd naturel numbers\n");
	scanf("%d",&a);
	do
	{
		printf("%d ",j);
		j+=2;
		i++;
	}
	while(a>=i);
	return 0;
}*/
/*#include<stdio.h>
int main() //question no 5
{
	int a,i=1,j=1;
	printf("Enter N to print first N odd naturel numbers\n");
	scanf("%d",&a);
	do
	{
		j+=2;
		i++;
	}
	while(a>=i);
	j-=2;
	while(j)
	{
		if(j%2==0)
			j--;
		else
		{	
			printf("%d ",j);
			j--;
		}
			
	}	
	return 0;
}*/
/*#include<stdio.h>
int main() //question no 6
{
	int a,i=1,j=2;
	printf("Enter N to print first N even naturel numbers\n");
	scanf("%d",&a);
	do
	{
		printf("%d ",j);
		j+=2;
		i++;
	}
	while(a>=i);
	return 0;
}*/
/*#include<stdio.h>
int main() //question no 7
{
	int a,i=1,j=2;
	printf("Enter N to print first N even naturel numbers\n");
	scanf("%d",&a);
	do
	{
		j+=2;
		i++;
	}
	while(a>=i);
	j-=2;
	while(j)
	{
		if(j%2==0)
		{
			printf("%d ",j);	
			j--;
		}
		else
			j--;
	}	
	return 0;
}*/
/*#include<stdio.h>
int main() //question no 8
{
	int a,i=1,j=1;
	printf("Enter N to print first square of 1st N naturel numbers\n");
	scanf("%d",&a);
	do
	{
		printf("%d ",j*j);
		j+=1;
		i++;
	}
	while(a>=i);
	return 0;
}*/
/*#include<stdio.h>
int main() //question no 9
{
	int a,i=1,j=1;
	printf("Enter N to print first cubes of N even naturel numbers\n");
	scanf("%d",&a);
	do
	{
		printf("%d ",j*j*j);
		j+=1;
		i++;
	}
	while(a>=i);
	return 0;
}*/
/*#include<stdio.h>
int main() //question no 10
{
	int a,i=1,j;
	printf("Enter N to print it's table\n");
	scanf("%d",&a);
	printf("Enter up to the table print\n");
	scanf("%d",&j);
	do
	{
		printf("%d * %d = %d\n",a,i,a*i);
		i++;
	}
	while(j>=i);
	return 0;
}*/
