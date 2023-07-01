//Program for addition and multiplication of two 3 X 3 matrices
#include<stdio.h>
#include<conio.h>
void print(int (*)[3]);
void add(int (*)[3],int (*)[3]);
void multi(int (*)[3],int (*)[3]);

void main()
{
	int a[3][3],b[3][3],i,j,p,q;
	clrscr();
	printf("Enter elements of First matrices\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nFirst matrices is \n");
	print(&a[0][0]);
	printf("\nEnter elements of Second matrices\n");
	for(p=0;p<3;p++)
	{
		for(q=0;q<3;q++)
		{
			scanf("%d",&b[p][q]);
		}
	}
	printf("\nSecond matrices is \n");
	print(&b[0][0]);
	add(&a[0][0],&b[0][0]);
	multi(&a[0][0],&b[0][0]);
	getch();
}

void print(int (*p)[3])
{
	int k,l;
	for(k=0;k<3;k++)
	{
		for(l=0;l<3;l++)
		{
			printf("\t%d",*( *(p + k) + l));
		}
		printf("\n");
	}
}

void add(int (*r)[3],int (*s)[3])
{
	int t[3][3],c,d;
	printf("\nAddition of two matrices is\n");
	for(c=0;c<3;c++)
	{
		for(d=0;d<3;d++)
		{
			t[c][d]=*(*(r+c)+d)+*(*(s+c)+d);
		}
	}
	print(&t[0][0]);
}

void multi(int (*g)[3],int (*h)[3])
{
	int f[3][3],sum=0,x,y,z;
	printf("Multiplication of two matrices is\n");
	for(x=0;x<3;x++)
		{
		for(y=0;y<3;y++)
		{
			for(z=0;z<3;z++)
			{
				sum=sum+(*(*(g+x)+z))*(*(*(h+z)+y));
			}
			f[x][y]=sum;
			sum=0;
		}
	}
	print(&f[0][0]);
}









