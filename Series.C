//Program to calculate sum of series (1/1!+1/2!+1/3!+1/4!+......)
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,p,i,fact=1;
	float a=0.0,b;
	clrscr();
	printf("Enter the last digit of series ");
	scanf("%d",&n);
	printf("The sum of sreies ");
	for(i=1;i<=n;i++)
	{
		for(p=1;p<=i;p++)
		{
		fact=fact*p;
		}
		b=(float)1/fact;
		a=a+b;
		printf("1/%d!",fact);
		if(i!=n)
		printf("+");
	}
	printf(" is %f ",a);
	getch();
}