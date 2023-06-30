//program to calculate area of different Shapes
#include<stdio.h>
void main()
{
char choice;
printf(" Select the figure the calculate \n 1. Square                           press 's'\n 2. Rectangle                        Press 'r' \n 3. Circle                           Press 'c' \n");
scanf("%c",&choice);
switch(choice)
{
	case 's':
	{
	float s,area;
	printf("Enter the side of square ");
	scanf(" %f",&s);
	area=s*s;
	printf("Area of Square is %f \n",area);
	}
	break;
	case 'r':
	{
	float l,b,area;
	printf("Enter the length of rectangle ");
	scanf(" %f",&l);
	printf("Enter the breadth of rectangle ");
	scanf(" %f",&b);
	area=l*b;
	printf("Area of Rectangle is %f \n",area);
	}
	break;
	case 'c':
	{
	float r,area;
	printf("Enter the radius of Circle ");
	scanf(" %f",&r);
	area=3.14*r*r;
	printf("Area of Circle is %f \n",area);
	}
	break;
	default :
	{
	printf("Please enter the valid key\n");
	}
	break;
}
}
