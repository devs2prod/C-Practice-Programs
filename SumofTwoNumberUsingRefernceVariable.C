//Program to store sum of two variable in third by refernce mechanism
#include<stdio.h>
#include<conio.h>
void add(int*,int*,int*);

void main()
{
	int a,b,sum;
	clrscr();
	printf("Enter two number\n");
	scanf("%d %d",&a,&b);
	add(&a,&b,&sum);
	printf("The sum of %d and %d is %d\n",a,b,sum);
	getch();
}

void add(int *a,int *b,int *sum)
{
*sum=*a+*b;
}