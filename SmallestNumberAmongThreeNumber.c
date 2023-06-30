// program to calculate smallest number out of given three number 
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the first number ");
	scanf("%d",&a);
	printf("Enter the second number ");
	scanf("%d",&b);
	printf("Enter the three number ");
	scanf("%d",&c);
	if(a>b)
	{
		if(b>c)
		{
		printf("%d is the smallest number\n",c);
		}
		else
		{
		printf("%d is the smallest number \n",b);
		}
	}
	if(a<b)
	{
		if(a<c)
		{
		printf("%d is the smallest number\n",a);
		}
		else
		{
		printf("%d is the smallest number \n",c);
		}
	}
}
