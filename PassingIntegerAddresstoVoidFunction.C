//Program to pass address of an integer to a void function and double the value of variable
#include<stdio.h>
#include<conio.h>
void dou(int*);

void main()
{
	int num;
	clrscr();
	printf("Enter any number\n");
	scanf("%d",&num);
	dou(&num);
	getch();
}

void dou(int *n)
{
	printf("Double of %d is %d\n",*n,2*(*n));
}