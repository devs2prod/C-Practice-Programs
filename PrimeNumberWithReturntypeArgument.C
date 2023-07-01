//Program to check the prime number using function with argument and return type
#include<stdio.h>
#include<conio.h>
int prime(int);

void main()
{
	int num,y;
	clrscr();
	printf("Enter any number \n");
	scanf("%d",&num);
	y=prime(num);
	if(y==1)
	{
		printf("%d is prime number \n",num);
	}
	else
	{
		printf("%d is not prime number \n",num);
	}
	getch();
}

int prime(int n)
{
	int i,a;
	for(i=2;i<n;i++)
	{
		a=n%i;
		if(a==0)
		{
			return 0;
		}
	}
	return 1;
}