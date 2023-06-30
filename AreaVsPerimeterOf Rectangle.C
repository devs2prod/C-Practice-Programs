/*Program to calculate Area and perimeter of rectangle
then calculate which one is greater*/
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int l,b,area,perimeter;
printf("Enter the length of rectangle ");
scanf("%d",&l);
printf("Enter the width of rectangle ");
scanf("%d",&b);
area=l*b;
perimeter=2*(l+b);
printf("Area of rectangle is %d \n",area);
printf("Perimeter of rectangle is %d \n",perimeter);
if(area>perimeter)
{
printf("Area of rectangle is greater than its perimeter\n");
}
else
{
printf("Perimeter of rectangle is greater than its area\n");
}
getch();
}
