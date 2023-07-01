//Program to merge two array in third array
#include<stdio.h>
#include<conio.h>
void main()
{
	int first[20],sec[20],third[20],i,j,n,m,k,f;
	clrscr();
	printf("Enter the number of elements in First array\n");
	scanf("%d",&n);
	printf("\nEnter the elements of first array\n");
	for(i=0;i<n;i++)
	scanf("%d",&first[i]);
	printf("\nEnter the number of elements in Second array\n");
	scanf("%d",&m);
	printf("\nEnter the elements of second array\n");
	for(j=0;j<m;j++)
	scanf("%d",&sec[j]);
	for(k=n;k<m+n;k++)
	{
		first[k]=sec[k-n];
	}
	for(f=0;f<n+m;f++)
	printf("\nThird[%d]=%d",f,first[f]);
	getch();
}







