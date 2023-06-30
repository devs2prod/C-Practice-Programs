/* Program to convert the temperature
 from Fahrenheit to Celsius */
#include<stdio.h>
#include<conio.h>
void main()
{
float f,c;
clrscr();
printf("Enter the temperature in Fahrenheit ");
scanf("%f",&f);
c=(5*f-160)/9;
printf("The temperature in Celsius is %f ", c);
getch();
}