//Program to calculate the occurrence of given no.in array
#include<stdio.h>
#include<conio.h>
void print(int *,int);
int check(int *,int,int);

void main()
{
	int array[20],num,i,n,y;
	clrscr();
	printf("Enter the number of element in array\n");
	scanf("%d",&n);
	printf("Enter element of array\n");
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
	print(&array[0],n);
	printf("\nEnter number which you want to check\n");
	scanf("%d",&num);
	y=check(&array[0],n,num);
	printf("\nOccurrence of %d in array = %d\n",num,y);
	getch();
}

void print(int *p,int k)
{
	int j;
	printf("Array is\n");
	for(j=0;j<k;j++)
	{
		printf("Array[%d]=%d\n",j,*(p+j));
	}
}

int check(int *d,int h,int u)
{
	int r,g=0;
	for(r=0;r<h;r++)
	{
		if(*(d+r)==u)
		g++;
	}
	return (g);
}








