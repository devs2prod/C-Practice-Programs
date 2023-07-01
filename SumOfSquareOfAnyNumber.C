#include<stdio.h>
#include<conio.h>
void main()
{
int num;
float h,c,i;
clrscr();
printf("Enter any number\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
	c=1/i;
	h=h+c;
}
printf("%f",h);
getch();
}