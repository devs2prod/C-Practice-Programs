//Program to find the average of three number
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
float av;
printf("Enter the three number ");
scanf("%d%d%d",&a,&b,&c);
av=a+b+c/3;
printf("Average of three number is %f ",av);
getch();
}