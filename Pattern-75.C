/*Program to print pattern on screen using function with number of rows as argument
5	4	3	2	1
4	3	2	1
3	2	1
2	1
1
*/
#include<stdio.h>
#include<conio.h>
void mayank(int);

void main()
{
	int num;
	clrscr();
	printf("Enter number of rows \n");
	scanf("%d",&num);
	mayank(num);
	getch();
}

void mayank(int n)
{
	int i,j;
	printf("\nDesired pattern is\n");
	for(i=n;i>0;i--)
	{
		for(j=i;j>0;j--)
		{
			printf("%d\t",j);
			if(j==1)
			{
				printf("\n");
			}
		}
	}
}