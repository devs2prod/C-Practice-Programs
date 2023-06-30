/*
Program to make function with argument and no return value
#include<stdio.h>
#include<conio.h>
void mayank(int,int);

void main()
{
	int a,b;
	clrscr();
	printf("Enter two number \n");
	scanf("%d %d",&a,&b);
	mayank(a,b);
	getch();
}

void mayank(int c,int d)
{
int sum;
sum=c+d;
printf("Sum of %d and %d is %d \n",c,d,sum);
}
*/

/*
Program to make function with no argument and no return value
#include<stdio.h>
#include<conio.h>
void mayank();

void main()
{
	clrscr();
	mayank();
	getch();
}

void mayank()
{
int a,b,sum;
printf("Enter two number \n");
scanf("%d %d",&a,&b);
sum=a+b;
printf("Sum of %d and %d is %d \n",a,b,sum);
}
*/

/*
Program to make function with argument and return value
#include<stdio.h>
#include<conio.h>
int mayank(int,int);

void main()
{
	int a,b,y;
	clrscr();
	printf("Enter two number \n");
	scanf("%d %d",&a,&b);
	y=mayank(a,b);
	printf("Sum of %d and %d is %d \n",a,b,y);
	getch();
}

int mayank(int c,int d)
{
return (c+d);
}
*/

/*
Program to make function with no argument and return value
#include<stdio.h>
#include<conio.h>
int mayank();

void main()
{
	int y;
	clrscr();
	y=mayank();
	printf("Sum of entered number is %d \n",y);
	getch();
}

int mayank()
{
	int a,b;
	printf("Enter two number \n");
	scanf("%d %d",&a,&b);
	return (a+b);
}
*/