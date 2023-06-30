//Program to calculate largest number out of given four number 
#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter the first number ");
	scanf("%d",&a);
	printf("Enter the second number ");
	scanf("%d",&b);
	printf("Enter the three number ");
	scanf("%d",&c);
	printf("Enter the four number ");
	scanf("%d",&d);
	if(a>b&&a>c&&a>d)
	{
		printf("%d is largest number \n",a);		
	}
	if(b>a&&b>a&&b>d)
	{
		printf("%d is largest number \n",b);		
	}
	if(c>a&&c>b&&c>d)
	{
		printf("%d is largest number \n",c);		
	}
	if(d>a&&d>b&&d>c)
	{
		printf("%d is largest number \n",d);		
	}
}
