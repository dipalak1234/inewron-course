//Assignment 9 Switch case problem
/*#include<stdio.h>// answer of question number 1
#include<stdlib.h>
int main()
{
	int a;
	while(1)
	{
	printf("\nTo know how many days in a month plese enter the month number ");
	printf("\n1. January");
	printf("\n2. February");
	printf("\n3. March");
	printf("\n4. April");
	printf("\n5. May");
	printf("\n6. June");
	printf("\n7. July");
	printf("\n8. August");
	printf("\n9. September");
	printf("\n10. October");
	printf("\n11. November");
	printf("\n12. December");
	printf("\n13. For exit\n");
	scanf("%d",&a);
		switch(a)
	{
		case 1:
			printf("\nThis month have 31 days");
			break;
		case 2:
			printf("\nThis month have 28 days");
			break;
		case 3:
			printf("\nThis month have 31 days");
			break;
		case 4:
			printf("\nThis month have 30 days");
			break;
		case 5:
			printf("\nThis month have 31 days");
			break;
		case 6:
			printf("\nThis month have 30 days");
			break;
		case 7:
			printf("\nThis month have 31 days");
			break;
		case 8:
			printf("\nThis month have 31 days");
			break;
		case 9:
			printf("\nThis month have 30 days");
			break;
		case 10:
			printf("\nThis month have 31 days");
			break;
		case 11:
			printf("\nThis month have 30 days");
			break;
		case 12:
			printf("\nThis month have 31 days");
			break;		
		case 13:
			exit(0);
		default:
			printf("\nEnter valid input");
	}	
	}
	return 0;
}*/
/*#include<stdio.h>// answer of question number 2
#include<stdlib.h>
int main()
{
	int a,b,c;
	while(1)
	{
		printf("\n select your choice ");
		printf("\n1. Addition");
		printf("\n2. Subtraction");
		printf("\n3. Multiplication");
		printf("\n4. Division");
		printf("\n5. Exit\n");
		scanf("%d",&a);
			switch(a)
			{
			case 1:
				printf("enter 2 number");
				scanf("%d%d",&b,&c);
				printf("the sum is %d",b+c);
				break;
			case 2:
				printf("enter 2 number");
				scanf("%d%d",&b,&c);
				printf("the subtraction is %d",b-c);
				break;
			case 3:
				printf("enter 2 number");
				scanf("%d%d",&b,&c);
				printf("the multiplication is %d",b*c);
				break;
			case 4:
				printf("enter 2 number");
				scanf("%d%d",&b,&c);
				printf("the division is %d",b/c);
				break;
			case 5:
				exit(0);
			default:
				printf("\nEnter valid input");
			}	
	}
	return 0;
}*/
/*#include<stdio.h>// answer of question number 3
#include<stdlib.h>
int main()
{
	int a,b,c;
	while(1)
	{
		printf("\n select your choice ");
		printf("\n1. Sunday");
		printf("\n2. Monday");
		printf("\n3. Tuesday");
		printf("\n4. Wednesday");
		printf("\n5. Thursday");
		printf("\n6. Friday");
		printf("\n7. Saturday");
		printf("\n8. Exit\n");
		scanf("%d",&a);
			switch(a)
			{
				case 1:
					printf("\nIt's Sunday");
					break;
				case 2:
					printf("\nIt's Monday");
					break;
				case 3:
					printf("\nIt's Tuesday");
					break;
				case 4:
					printf("\nIt's Wednesday");
					break;
				case 5:
					printf("\nIt's Thursday");
					break;
				case 6:
					printf("\nIt's Friday");
					break;
				case 7:
					printf("\nIt's Saturday");
					break;
				case 8:
					exit(0);
				default:
					printf("\nEnter valid input");
			}	
	}
	return 0;
}*/
/*#include<stdio.h>// answer of question number 4
#include<stdlib.h>
int main()
{
	int a,b,c,d;
	while(1)
	{
		printf("\n select your choice ");
		printf("\n1. Check whether a given set of three numbers are lengths of an isosceles triangle or not");
		printf("\n2. Check whether a given set of three numbers are lengths of sides of a reight angled triangle or not");
		printf("\n3. Check whether a given set of three numbers are equilateral triangle or not");
		printf("\n4. Exit\n");
		scanf("%d",&a);
			switch(a)
			{
				case 1:
					printf("Enter 3 lenth to check it isosceles triangle or not");
					scanf("%d%d%d",&b,&c,&d);
					if((b==c&&c!=d)||(b==d&&d!=c)||(c==d&&d!=b))
					{
						printf("It is a Isosceles triangle");
					}
					else
					printf("It is not a Isosceles triangle");
					break;
				case 2:
					printf("Enter 3 lenth to check it right angle triangle or not");
					scanf("%d%d%d",&b,&c,&d);
					if((b*b==(c*c+d*d))||(c*c==(d*d+b*b))||(d*d==(b*b+c*c)))
					{
						printf("It is a Right angle triangle");
					}
					else
					printf("It is not a Right angle triangle");
					break;
				case 3:
					
					printf("Enter 3 lenth to check it equilateral triangle or not");
					scanf("%d%d%d",&b,&c,&d);
					if(b==c&&c==d)
					{
						printf("It is a equilateral triangle");
					}
					else
					printf("It is not a equilateral triangle");
					break;
				case 4:
					exit(0);
				default:
					printf("\nEnter valid input");
			}	
	}
	return 0;
}*/
/*#include<stdio.h>//answer of question number 4
#include<stdlib.h>
int main()
{
	int var;
	while(1)
	{
		printf("\n1. Print Good");
	printf("\n2. Print Better");
	printf("\n3. Print Best");
	printf("\n4. Exit\n");
	scanf("%d",&var);
	switch(var)
	{
		case 1:
			printf("Good");
			break;
		case 2:
			printf("Better");
			break;
		case 3:
			printf("Best");
			break;
		case 4:
			exit(0);
		default:
			printf("Invalid");
	}
	}
	return 0;
}*/
/*#include<stdio.h>//answer of question number 5
#include<stdlib.h>
int main()
{
	int var;
	while(1)
	{
	
	printf("\n4. Exit\n");
	scanf("%d",&var);
	switch(var)
	{
		case 1:
			printf("Good");
			break;
		case 2:
			printf("Better");
			break;
		case 3:
			printf("Best");
			break;
		case 4:
			exit(0);
		default:
			printf("Invalid");
	}
	}
	return 0;
}*/
/*#include<stdio.h>//answer of question number 6
#include<stdlib.h>
int main()
{
	int a;
	printf("Enter a year to know it leap year or not ");
	scanf("%d",&a);
	switch(a%100==0)
	{
		case 1:
			switch(a%400)
			{
				case 1:
					printf("This year is not leap year");
					break;
				case 0:
					printf("This year is leap year");
					break;
			}
			break;
		case 0:
			switch(a%4)
			{
				case 1:
					printf("This year is not leap year");
					break;
				case 0:
					printf("This year is leap year");
					break;
			}
			break;
	}
	return 0;
}*/
/*#include<stdio.h>//answer of question number 7
#include<stdlib.h>
int main()
{
	int a,b,c;
	while(1)
	{
		printf("Enter the electric bill unit\n");
		scanf("%d",&a);
		switch(a)
		{
			case 0 ... 50:
				b=a*0.50;
				printf("The bill amount is %d\n",b);
				printf("\"For exit enter 0 & For continue enter any other number\"");
				scanf("%d",&c);
				break;
			case 51 ... 150:
				b=a*0.75;	
				printf("The bill amount is %d\n",b);
				printf("\"For exit enter 0 & For continue enter any other number\"");
				scanf("%d",&c);
				break;
			case 151 ... 250:
				b=a*1.20;	
				printf("The bill amount is %d\n",b);
				printf("\"For exit enter 0 & For continue enter any other number\"");
				scanf("%d",&c);
				break;
			default:
				b=a*1.50+a*.2;	
				printf("The bill amount is %d\n",b);
				printf("\"For exit enter 0 & For continue enter any other number\"");
				scanf("%d",&c);
		}
		if(c==0)
		break;
	}
	return 0;
}*/
/*#include<stdio.h>answer of question number 8
#include<stdlib.h>
int main()
{
	int a,b,c;
	while(1)
	{
		printf("Enter a positive number to convert it negitive or enter a negitive number convert it positive\n");
		scanf("%d",&a);
		switch(a>0)
		{
			case 1:
				printf("The given positive number output is %d\n",-a);
				printf("\"For exit enter 0 & For continue enter any other number\"");
				scanf("%d",&c);
				break;
			case 0:
				printf("The given positive number output is %d\n",-a);
				printf("\"For exit enter 0 & For continue enter any other number\"");
				scanf("%d",&c);
				break;
			}
		if(c==0)
		break;
	}
	return 0;
}*/
/*#include<stdio.h>//answer of question number 9
#include<stdlib.h>
int main()
{
	int a,b,c;
	while(1)
	{
		printf("Enter a even number to get it's nearest upper odd number\n");
		scanf("%d",&a);
		switch(a%2==0)
		{
			case 1:
				printf("The upper nearest odd number of %d is %d\n",a,a+1);
				printf("\"For exit enter 0 & For continue enter any other number\"");
				scanf("%d",&c);
				break;
			case 0:
				printf("Invalid Input plese enter a valid input & for exit enter 0 or for continuation enter any number");
				scanf("%d",&c);
				break;
			}
		if(c==0)
		break;
	}
	return 0;
}*/
/*#include<stdio.h>//answer of question number 10
#include<stdlib.h>
#include<math.h>
int main()
{
float a,b,c,d,e,f;
	while(1)
	{
		printf("Enter value of a, b and c of a quadratic equation\n");
		scanf("%f%f%f",&a,&b,&c);
		switch(b*b-4*a*c>0)
		{
			case 1:
					d=b*b-4*a*c;
					e=(-b+sqrt(d))/(2*a);
					f=(-b-sqrt(d))/(2*a);
					printf("The two roots are %.3f and %.3f\n",e,f);
					printf("\"For exit enter 0 & For continue enter any other number\"");
					scanf("%d",&c);
					break;	
			case 0:
				switch(b*b-4*a*c<0)
				{
					case 1:
					d=4*a*c-b*b;
					e=(sqrt(d)/(2*a));
					f=(-b/(2*a));
					printf("The two roots are %.3f + %.3fi and %.3f - %.3fi\n",f,e,f,-e);
					printf("\"For exit enter 0 & For continue enter any other number\"");
					scanf("%d",&c);
					break;
					case 0:
					d=(-b/2*a);
					printf("The two roots are %.3f and %.3f\n",d,d);
					printf("\"For exit enter 0 & For continue enter any other number\"");
					scanf("%d",&c);
					break;	
				}				
		}
		if(c==0)
		break;
	}
	return 0;
}*/














