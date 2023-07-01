//Program to find second highest number in list
#include<stdio.h>
#include<conio.h>
void main()
{
	int max[5],i,h,j,temp;
	clrscr();
	printf("Enter five numbers\n");
	for(i=0;i<5;i++)
	scanf("%d",&max[i]);
	for(h=0;h<4;h++)
	{
		for(j=0;j<4-h;j++)
		{
			if(max[j]>max[j+1])
			{
				temp=max[j];
				max[j]=max[j+1];
				max[j+1]=temp;
			}
		}
	}
	printf("Second highest number is %d\n",max[3]);
	getch();
}
