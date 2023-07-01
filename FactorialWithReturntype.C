//Program to calulate factorial using function with return value and argument
#include<stdio.h>
#include<conio.h>
int fact(int);

void main()
{
	int y,num;
	clrscr();
	printf("Enter any number \n");
	scanf("%d",&num);
	y=fact(num);
	printf("factorial of %d is %d \n",num,y);
	getch();
}

int fact(int a)
{
int sum;
if(a==1)
return (a);
sum=a*fact(a-1);
return (sum);
}