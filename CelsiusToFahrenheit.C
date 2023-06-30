/* Program to convert temperature
from celsius to fahrenheit */
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float f,c;
printf("Enter the temperature in Celsius ");
scanf("%f",&c);
f=(9*c+160)/5;
printf("The temperature fahrenheit in is %f\n",f);
getch();
}