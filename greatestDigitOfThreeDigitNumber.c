/*Program that accepts a three digit number
 from user and find the gratest digit in it*/
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,e,d;
printf("Enter any three digit number ");
scanf("%d",&a);
b=a/10;
c=a%10;
e=b/10;
d=b%10;
if(a>99 && a<1000)
{
	if(c>d&&c>e)
		{
		printf("%d is greatest digit among entered number\n",c);
		}
	if(e>d&&e>c)
		{
		printf("%d is greatest digit among entered number\n",e);
		}
	if(d>e&&d>c)
	{
	printf("%d is greatest digit among entered number\n",d);
	}
}
else
{
printf("Please enter three digit number \n");
}
getch();
}