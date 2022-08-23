//Assignment 8 Pattern Problems
/*#include<stdio.h>// Answer of question no 1
int main()
{
	int a,i,j;
	printf("Enter a number to form N by N structure");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}*/
/*#include<stdio.h>// Answer of question no 2
int main()
{
	int a,i,j;
	printf("Enter a number to form N by N structure");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
			if(j>a-i)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}*/
/*#include<stdio.h>// Answer of question no 3
int main()
{
	int a,i,j;
	printf("Enter a number to form N by N structure");
	scanf("%d",&a);
	for(i=1;i<=a+1;i++)
	{
		for(j=1;j<=a+1;j++)
		{
			if(j>(a+1)-i)
			printf(" ");
			else
			printf("*");
		}
		printf("\n");
	}
}*/
/*#include<stdio.h>// Answer of question no 4
int main()
{
	int a,i,j;
	printf("Enter a number to form N by N structure\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
			if(j<i)
			printf(" ");
			else
			printf("*");
		}
		printf("\n");
	}
}*/

/*#include<stdio.h>//answer of question no 5
int main()
{
	int a,i,j,p=6,q=4,b;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=9;j++)
		{
			p>j&&j>q?printf("*"):printf(" ");
		}
		p++;
		q--;
		printf("\n");
	}
	return 0;	
}*/
/*#include<stdio.h>//answer of question no 6
int main()
{
	int a,i,j,p=10,q=1,b;
	for(i=1;i<=5;i++)
	{
		for(j=0;j<=9;j++)
		{
			p>j&&j>=q?printf("*"):printf(" ");
		}
		p--;
		q++;
		printf("\n");
	}
	return 0;	
}*/
/*#include<stdio.h>//answer of question no 7
int main()
{
	int a,i,j,p=5,q=6,b;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=10;j++)
		{	
			if(i==1)
			printf("*");
			else
			j>p&&j<q?printf(" "):printf("*");
		}
		p--;
		q++;
		printf("\n");
	}
	return 0;	
}*/
/*#include<stdio.h>//answer of question no 8
int main()
{
	int a,i,j,p=3,q=5,b,x;
	for(i=1;i<=4;i++)
	{
		a=1;
		for(j=1;j<=7;j++)
		{
			if(p<j&&j<q)
			{	
				if(x)
				{
					if(a<=i)
					{	
					printf("%d",a);
					a++;
					if(a>i)
						x=0;
					}
				}
				else
				{
						a--;
				printf("%d",a-1);
			
				}
			}	
			else
			printf(" ");
		}
		x=1;
		p--;
		q++;
		printf("\n");
	}
	return 0;	
}*/
/*#include<stdio.h>//answer of question no 9
int main()
{
	int a,i,j,p=0,q=8,b,x;
	for(i=4;i>=1;i--)
	{
		a=1;
		for(j=7;j>=1;j--)
		{
			if(p<j&&j<q)
			{	
				if(x)
				{
					if(a<=i)
					{	
					printf("%d",a);
					a++;
					if(a>i)
						x=0;
					}
				}
				else
				{
						a--;
				printf("%d",a-1);
			
				}
			}	
			else
			printf(" ");
		}
		x=1;
		p++;
		q--;
		printf("\n");
	}
	return 0;	
}*/
/*#include<stdio.h>//answer of question no 10
int main()
{
	int a=1,j,x=1,i,min=3,max=5;
	for(i=1;i<=4;i++)
	{
		if(i==1)
		{
			for(j=1;j<=7;j++)
			{
			if(x)	
			{
			if(a<=4)
			{
			printf("%d",a);
			a++;
			if(a>4)
			x=0;
			}
			}
			else
			{
				a--;
				printf("%d",a-1);
			}
			
			}
			a=1;
			x=1;
			printf("\n");
		}
		else
		{
				for(j=1;j<=7;j++)
				{
					if(x)	
					{
						if(a<=4)
						{
							if(min<j&&j<max)
							printf(" ");
							else
							printf("%d",a);
						a++;
						if(a>4)
						x=0;
						}
					}
					else
					{
						a--;
						if(min<j&&j<max)
							printf(" ");
						else
						printf("%d",a-1);
					}
					
				}
				a=1;
				x=1;
				printf("\n");
				min--;
				max++;
		}
	}
	return 0;
}*/
/*#include<stdio.h>//answer of question no 11
int main()
{
	int i,j,p=6,q=4;
	char a;
	for(i=1;i<=5;i++)
	{
		a='A';
		for(j=1;j<=9;j++)
		{
			if(q<j&&j<p)
			{
				printf("%c",a);
				if(j<=4)
				a++;
				else
				a--;
			}
			else
			printf(" ");
		}
		p++;
		q--;
		printf("\n");
	}
	return 0;	
}*/
/*#include<stdio.h>//answer of question no 12
int main()
{
	int i,j,p=0,q=8;
	char a;
	for(i=1;i<=4;i++)
	{
		a='A';
		for(j=1;j<=7;j++)
		{
			if(p<j&&j<q)
			{
				printf("%c",a);
				if(j<=3)
				a++;
				else
				a--;
				
			}
			else
			printf(" ");
		}
		p++;
		q--;
		printf("\n");
	}
	return 0;	
}*/
/*#include<stdio.h>//answer of question no 13
int main()
{
	int i,j,p=7,q=7;
	char a;
	for(i=1;i<=7;i++)
	{
		a='A';
		for(j=1;j<=13;j++)	
		{
			if(i==1)
			{
				if(0<j&&j<14)
				{
					if(j<=7)
					{
						printf("%c",a);
						a++;
					}
					else
					{	a--;
						printf("%c",a-1);
					}
				}
			}
			else
			{
				if(p<j&&j<q)
				{
					printf(" ");
				}
				else
				{
					if(j<=6)
					{
						printf("%c",a);
						a++;
					}
					else
					{
						a--;
						printf("%c",a);
					}
				}
			}
		}
		p--;
		q++;
		printf("\n");
	}
	return 0;
}*/
/*#include<stdio.h>//answer of question no 14
int main()
{
	int i,j,p=7,q=7;
	for(i=1;i<=4;i++)
	{
		//printf("*");
		for(j=1;j<=4;j++)
		{
		if(j==1||i==j)
		printf("*");
		else
		printf(" ");
		}
		printf("\n");
	}
	for(i=1;i<=5;i++)
	printf("*");

	return 0;
}*/
/*#include<stdio.h>//answer of question no 15
int main()
{
	int i,j;
	for(i=0;i<=3;i++)
	{
		for(j=1;j<=5;j++)
		{
		if(j==5-i||j==5)
		printf("*");
		else
		printf(" ");
		}
		printf("\n");
	}
	for(i=1;i<=5;i++)
	printf("*");

	return 0;
}*/
/*#include<stdio.h>//answer of question no 16
int main()
{
	int i,j;
	for(i=0;i<=3;i++)
	{
		for(j=1;j<=9;j++)
		{
		if(j==5-i||j==5+i)
		printf("*");
		else
		printf(" ");
		}
		printf("\n");
		printf("\n");
	}
	for(i=1;i<=9;i++)
	printf("*");

	return 0;
}*/
/*#include<stdio.h>//answer of question no 17
int main()
{
	int i,j;
	for(i=1;i<=9;i++)
	printf("*");
	printf("\n");
	printf("\n");
	for(i=3;i>=0;i--)
	{
		for(j=1;j<=9;j++)
		{
		if(j==5-i||j==5+i)
		printf("*");
		else
		printf(" ");
		}
		printf("\n");
		printf("\n");
	}
	return 0;
}*/
/*#include<stdio.h>//answer of question no 18
int main()
{
	int i,i1,j,j1,p=6,p1=8,q=4,q1=0;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=8;j++)
		{
			p>j&&j>q?printf("*"):printf(" ");
		}
		p++;
		q--;
		printf("\n");
	}
	for(i=1;i<=9;i++)
	{
		printf("*");
	}
	printf("\n");
	for(i1=1;i1<=4;i1++)
	{
		for(j1=0;j1<=7;j1++)
		{
			p1>j1&&j1>q1?printf("*"):printf(" ");
		}
		p1--;
		q1++;
		printf("\n");
	}
	return 0;	
}*/
/*#include<stdio.h>//answer of question no 18 1st part
int main()
{
	int i1,j1,a1=2,b1=18,p1=7,q1=13;
	int i2,j2,a2=6;
	int i3,j3,a3=1,b3=19;
	for(i1=1;i1<=3;i1++)
	{
		for(j1=1;j1<=19;j1++)
		{
			if(a1>=j1||(p1<j1&&j1<q1)||j1>=b1)		
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		a1--;
		p1++;
		q1--;
		b1++;
		printf("\n");
	}
	for(i2=1;i2<=2;i2++)//2nd part
	{
		for(j2=1;j2<=a2;j2++)
		{
				printf("*");
		}
		if(i2==1)
		printf("MySirG");
		a2++;
	}
	printf("\n");
		for(i3=1;i3<=9;i3++)//3rd part
	{
		for(j3=1;j3<=19;j3++)
		{
			if(a3<j3&&j3<b3)		
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		a3++;
		b3--;
		printf("\n");
	}
	return 0;
}*/



















