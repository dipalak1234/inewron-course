//Assignment 12 Recursion in C Language
/*#include<stdio.h> //Answer of question no 1
void printNnumber(int);
int main()
{
    int a ;
    printf("Enter n to print 1st n natural numbers\n");
    scanf("%d",&a);
    printNnumber(a);
    return 0;
}
void printNnumber(int n)
{
    if(n>0)
    {
        printNnumber(n-1);
        printf("%d ",n);
    }
}*/
/*#include<stdio.h> //Answer of question no 2
void revNnumber(int);
int main()
{
    int a ;
    printf("Enter n to print 1st n natural numbers in reverse order\n");
    scanf("%d",&a);
    revNnumber(a);
    return 0;
}
void revNnumber(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        revNnumber(n-1);
    }
}*/
/*#include<stdio.h> //Answer of question no 3
void oddNnumber(int);
int main()
{
    int a,b;
    printf("Enter n to print 1st n odd natural numbers\n");
    scanf("%d",&a);
    b=a-1;
    oddNnumber(b);
    return 0;
}
void oddNnumber(int n)
{
    if(n>=0)
    {
        oddNnumber(n-1);   
        printf("%d ",n*2+1);
    }
}*/
/*#include<stdio.h> //Answer of question no 4
void oddNnumber(int);
int main()
{
    int a,b;
    printf("Enter n to print 1st n odd natural numbers in reverse order\n");
    scanf("%d",&a);
    b=a-1;
    oddNnumber(b);
    return 0;
}
void oddNnumber(int n)
{
    if(n>=0)
    {      
        printf("%d ",n*2+1);
        oddNnumber(n-1);
    }
}*/
/*#include<stdio.h> //Answer of question no 5
void evenNnumber(int);
int main()
{
    int a,b;
    printf("Enter n to print 1st n even natural numbers\n");
    scanf("%d",&a);
    evenNnumber(a);
    return 0;
}
void evenNnumber(int n)
{
    if(n>0)
    {
        evenNnumber(n-1);   
        printf("%d ",n*2);
    }
}*/
/*#include<stdio.h> //Answer of question no 6
void evenNnumber(int);
int main()
{
    int a,b;
    printf("Enter n to print 1st n even natural numbers in reverse order\n");
    scanf("%d",&a);
    evenNnumber(a);
    return 0;
}
void evenNnumber(int n)
{
    if(n>0)
    {
        printf("%d ",n*2);
        evenNnumber(n-1);   
    }
}*/
/*#include<stdio.h> //Answer of question no 7
void sqrNnumber(int);
int main()
{
    int a;
    printf("Enter n to print squares of 1st n natural numbers\n");
    scanf("%d",&a);
    sqrNnumber(a);
    return 0;
}
void sqrNnumber(int n)
{
    if(n>0)
    {
        sqrNnumber(n-1);
        printf("%d ",n*n);
    }
}*/
/*#include<stdio.h>//Answer of question no 8
void binary(int);
int main()
{
    int i,p;
    printf("Enter a number to get it's binary value\n");
    scanf("%d",&p);
    i=2*p;
    binary(i);
    return 0;
}
void binary(int n)
{
    if (n>0)
    {
        n=n/2;
        binary(n);
        printf("%d",n%2);
    }
}*/
/*#include<stdio.h>//Answer of question no 9
void binary(int);
int main()
{
    int i,p;
    printf("Enter a number to get it's binary value\n");
    scanf("%d",&p);
    i=8*p;
    binary(i);
    return 0;
}
void binary(int n)
{
    
    if (n>0)
    {
        n=n/8;
        binary(n);
        printf("%d",n%8);
    }
    
}*/
/*#include<stdio.h>//Answer of question no 10
void reverse(int);
int main()
{
    int a;
    printf("Enter a number to get it's reverse value\n");
    scanf("%d",&a);
    reverse(a);
    return 0;
}
void reverse(int a)
{
    int b;
    if(a/10!=0)
    {
        b=a%10;
        printf("%d",b);
        a/=10;
        if(a/10==0)
        printf("%d",a);
        reverse(a);
    }
}*/