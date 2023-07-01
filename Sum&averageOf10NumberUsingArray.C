//Program to sum and average of 10 number using array
#include<stdio.h>
#include<conio.h>
int add(int *);
void average(int*);

void main()
{
	int num[10],i,y;
	clrscr();
	printf("Enter 10 number\n");
	for(i=0;i<10;i++)
	scanf("%d",&num[i]);
	y=add(&num[0]);
	printf("sum of 10 number is %d\n",y);
	average(&num[0]);
	getch();
}

int add(int *n)
{
	int i,sum=0;
	for(i=0;i<10;i++)
	{
		sum+=*(n+i);
	}
	return sum;
}

void average(int *p)
{
	float av;
	av=(float)add(p)/10;
	printf("Average of 10 number is %f\n",av);
}













