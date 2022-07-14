/*Assignment-1 of A Job Ready Bootcamp in C++, DSA and IOT MY SIRG
INPUT AND OUTPUT IN C LANGUAGE*/
#include<stdio.h>
int main()
{
	int R,A,DD,MM,YY,hh,mm;
	int x=printf("ineuron ");//Answer of question no 5 and 12
	printf("%d",x);
	printf("\nHello Students\n");//Answer of question no 1
	printf("Hello\nStudents\n");//Answer of question no 2
	printf("\"My SirG\"\n");//Answer of question no 3
	printf("Enter the radius of the circle for calculating the area\n");//Answer of question no 4
	scanf("%d",&R);
	printf("Area of circle is %d having the radius %d\n",A=3.14*R*R,R);
	printf("\"Hello, Dipalak Chakrabory\"\n");//Answer of question no 6
	printf("\"%%d\"\n");//Answer of question no 7
	printf("\"\\n\"\n");//Answer of question no 8
	printf("\"\\\\\"\n");//Answer of question no 9
	printf("Input a date in format of DD/MM/YYYY\n");//Answer of question no 10
	scanf("%d/%d/%d",&DD,&MM,&YY);
	printf("Day-%d, Month-%d, Year-%d\n",DD,MM,YY);
	printf("Input a time in format of HH:MM\n");//Answer of question no 11
	scanf("%d:%d",&hh,&mm);
	printf("\"%d:%d\" converted to \"%d Hour and %d Minute\"\n",hh,mm,hh,mm);
	return 0;
}

