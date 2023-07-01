//Program to calculate a to the power b using function with a and b as argument and return result
#include<stdio.h>
#include<conio.h>
int power(int,int);
void main()
{
	int a,b,y;
	clrscr();
	gotoxy(35,1);
	printf("A TO THE POWER B\n");
	printf("Enter the value of a and b\n");
	scanf("%d %d",&a,&b);
	y=power(a,b);
	printf("%d to the power %d is %d",a,b,y);
	getch();
}

int power(int a,int b)
{
	int i,pow=1;
	for(i=1;i<=b;i++)
	{
		pow*=a;
	}
	return pow;
}








