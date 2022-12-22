//Assignment 14 Array in C Language
/*#include<stdio.h>//Answer of question no 1
int main()
{
  
    int a[10],i,sum=0;
    printf("Enter 10 number to get sum\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
        
    }
	printf("%d",sum);
    return 0;

}*/
/*#include<stdio.h>//Answer of question no 2
int main()
{
    int a[10],i;
    float sum=0;
    printf("Enter 10 number to get sum and average\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
        
    }
	printf("sum is =%.0f & average is =%.2f",sum,sum/10);
    return 0;
}*/
/*#include<stdio.h>//Answer of question no 3
int main()
{
    int a[10],i,even=0,odd=0;
    printf("Enter 10 number to get separate even and odd numbers sum value\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        even=even+a[i];
        else
        odd=odd+a[i];     
    }
	printf("even number sum  is =%d & odd number sum is =%d",even,odd);
    return 0;
}*/
/*#include<stdio.h>//Answer of question no 4
int main()
{
    int a[10],i,g=0;
    printf("Enter 10 number to get greatest number among them\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        if(g<a[i])
        g=a[i];
    }
	printf("The greatest number is =%d",g);
    return 0;
}*/
/*#include<stdio.h>//Answer of question no 5
int main()
{
    int a[10],i,g;
    printf("Enter 10 number to get smallest number among them\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    g=a[0];
    for(i=0;i<=9;i++)
    {
        if(a[i]<g)
        g=a[i];
    }
	printf("The smallest number is = %d",g);
    return 0;
}*/
/*#include<stdio.h>//Answer of question no 6
void sort(int a[]);
int main()
{
	int a[10];
	int p;
	printf("Enter 10 numbers to sort them\n");
	for(p=0;p<10;p++){
		scanf("%d",&a[p]);
	}
	sort(a);
	return 0;
}
void sort(int a[]){
	int i,j,k=0,l;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(a[i]>a[j]){
			k=a[i];
			a[i]=a[j];
			a[j]=k;
			}
		}
	}
	for(l=9;l>=0;l--){
		printf("%d ",a[l]);
	}
}*/
/*#include<stdio.h>//Answer of question no 7
int main()
{
	int a[10];
	int i,count=0,l=0,l2=0;
	printf("Enter 10 numbers to get 2nd largest of them\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(count==1) {
               if (a[i] > a[i - 1]) {
                   l = a[i];
                   l2 = a[i - 1];
               } else {
                   l = a[i - 1];
                   l2 = a[i];
               }
           }
           if(count>1){
               if(a[i]>l2){
                   if(a[i]>l) {
                       l2=l;
					   l=a[i];
                   }else{
                   	l2=a[i];
				   }
               }
           }
            count++;
	}
		
	printf("The 2nd largest number is :%d",l2);
	return 0;
}*/
/*#include<stdio.h>//Answer of question no 8
int main()
{
	int a[10];
	int i,count=0,s,s2;
	printf("Enter 10 numbers to get 2nd smallest of them\n");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
		if(count==1) {
               if (a[i] > a[i - 1]) {
                   s2 = a[i];
                   s = a[i - 1];
               } else {
                   s2 = a[i - 1];
                   s = a[i];
               }
           }
           if(count>1){
               if(a[i]<s2){
                   if(a[i]<s) {
                       s2=s;
                       s=a[i];
                   }
                   else{
                       s2=a[i];
                   }
               }
           }
            count++;
	}
	printf("The 2nd smallest number is :%d",s2);
	return 0;
}*/
/*#include<stdio.h>//Answer of question no 9
int main(){
	int a[1000],b,i;
	printf("How many number you want to input and display it in reverse order\n");
	scanf("%d",&b);
	printf("Enter %d number\n",b);
	for(i=0;i<b;i++){
		scanf("%d",&a[i]);
	}
	printf("The reverse order of theis seris is : \n");
	for(i=b-1;i>=0;i--){
		printf("%d ",a[i]);
	}
	return 0;
}*/
/*#include<stdio.h>//Answer of question no 10; for copy the element of one array into another array
int main(){
int main(){
	int b[20],a[10],i,j;
	printf("Enter 10 values\n");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		b[i]=a[i];
	}
	for(i=0;i<10;i++){
		printf("%d ",b[i]);
	}
	return 0;
}*/
