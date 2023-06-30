//program for generating electricity Bill
#include<stdio.h>
void main()
{
	int lm,cm,bill,unit;
	printf("Enter the last month unit ");
	scanf("%d",&lm);
	printf("Enter the current month unit ");
	scanf("%d",&cm);	
	unit=cm-lm;
	if(unit>0&&unit<=100)
	{
		bill=unit*2;
		printf("Bill Amount is %d\n",bill);
	}
	if(unit>100&&unit<=200)
	{
		bill=unit*3;
		printf("Bill Amount is %d\n",bill);
	}
	if(unit>200&&unit<=300)
	{
	bill=unit*4;
	printf("Bill Amount is %d\n",bill);
	}
	if(unit>300)
	{
	bill=unit*5;
	printf("Bill Amount is %d\n",bill);
	}
}
