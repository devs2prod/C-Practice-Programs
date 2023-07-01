//Program to reverse elements in array
#include<stdio.h>
#include<conio.h>
void Reverse(int*, int);

void main()
{
	int may[50],num,i,j;
	clrscr();
	printf("Enter the number of element of array\n");
	scanf("%d",&num);
	printf("Please Enter elements of array\n");
	for(i=0;i<num;i++)
	scanf("%d",&may[i]);
	Reverse(&may,num);
 /*	for(k=0;k=num/2;k++)
	{
		temp=may[k];
		may[ik]=may[num-1-k];
		may[num-1-k]=temp;
	} */
	printf("Element of array is \n");
	for(j=0;j<num;j++)
	printf("may[%d] = %d\n",j,may[j]);
	getch();
}

void Reverse(int *p, int n)
{
	int k,temp;
	for(k=0;k<n/2;k++)
	{
		temp=*(p+k);
		*(p+k)=*(p+n-1-k);
		*(p+n-1-k)=temp;
	}
}








