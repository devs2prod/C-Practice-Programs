//Program to display transpose of a matrix
#include<stdio.h>
#include<conio.h>
void main()
{
	int u,v,a[5][5],b[5][5],x,y,p,q,i,j,r,c;
	clrscr();
	printf("Enter number of rows and column less than 6\n");
	scanf("%d%d",&r,&c);
	printf("Enter elements of matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered matrix is \n");
	for(u=0;u<r;u++)
	{
		for(v=0;v<c;v++)
		{
			printf("\t%d",a[u][v]);
		}
		printf("\n");
	}
	for(p=0;p<r;p++)
	{
		for(q=0;q<c;q++)
		{
			b[q][p]=a[p][q];
		}
	}
	printf("Transpose of a matrix is \n");
	for(x=0;x<c;x++)
	{
		for(y=0;y<r;y++)
		{
			printf("\t%d",b[x][y]);
		}
		printf("\n");
	}
	getch();
}