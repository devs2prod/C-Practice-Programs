//Program t calculate the sum of diagonal elements of a3 X 3 matrix
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,p,q,sum=0;
	clrscr();
	printf("Enter the elements of matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEntered matrix is\n");
	for(p=0;p<3;p++)
	{
		for(q=0;q<3;q++)
		{
			printf("\t%d",a[p][q]);
			if(p==q)
			sum+=a[p][q];
		}
		printf("\n");
	}
	printf("\nSum of diagonals elements is %d",sum);
	getch();
}
