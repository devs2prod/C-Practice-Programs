
/* Program to enter the
 three number from user and reverse of it and sum of all digits in it */
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,sum;
printf("Enter the number ");
scanf("%1d%1d%1d",&a,&b,&c);
printf("The reverse of number is %d%d%d\n ",&c,&b,&a);
sum=a+b+c;
printf("The sum of all digit of number is %d",sum);
getch();
}