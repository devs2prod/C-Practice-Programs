// Program to calculate fibonacci series using without return type and with argument
#include<stdio.h>
#include<conio.h>
void fibonacci(int);

void main()
{
	int num;
	clrscr();
	printf("Enter the last digit of fibonacci series \n");
	scanf("%d",&num);
	printf("\nFIBONACCI SERIES IS \n");
	fibonacci(num);
	getch();
}

void fibonacci(int n)
{
	int i,a=0,b=1,sum;
	for(i=1;i<=n;i++)
	{
	 sum=a+b;
	 printf("%d\t",a);
	 a=b;
	 b=sum;
	}
}














