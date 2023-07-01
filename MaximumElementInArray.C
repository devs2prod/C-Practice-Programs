//program to find maximum element in array element in array
#include<stdio.h>
#include<conio.h>
void main()
{
	int may[5],i,j,c=0;
	clrscr();
	printf("Enter 5 number\n");
	for(i=0;i<5;i++)
	scanf("%d",&may[i]);
	for(j=0;j<4;j++)
	{
		if(may[j+1]>may[c])
		c=j+1;
	}
	printf("Max. number in 5 number is %d\n",may[c]);
	getch();
}