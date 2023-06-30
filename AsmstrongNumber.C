/* Program that accepts a three digit number from user and check whether
it is Armstrong or not */
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,d,e,f;
printf("Enter the any three digit number ");
scanf("%d",&a);
b=a/10;
c=a%10;
d=b%10;
e=b/10;
f=(c*c*c)+(d*d*d)+(e*e*e);
if(a<1000 && a>99)
{
if(a==f)
{
	printf("Entered number is Armstrong \n");
}
else
{
	printf("Entered number is not Armstrong \n");
}
}
else
{
	printf("Please enter three digit number\n ");
}
getch();
}