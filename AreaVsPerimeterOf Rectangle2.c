/*program to calculate Area and perimeter of Rectangle then calculate which one (out of area and perimeter) is greater*/
#include<stdio.h>
void main()
{
	float area,peri,l,b;
	printf("Enter the length of rectangle ");
	scanf("%f",&l);
	printf("Enter the bredth of rectangle ");
	scanf("%f",&b);
	area=l*b;
	peri=2*(l+b);
	printf("AREA of rectangle is %f\n",area);
	printf("PERIMETER of rectangle is %f\n",peri);
	if(area>peri)
	{
	printf("AREA is Greater than PERIMETER\n");
	}
	else
	{
	printf("PERIMETER is Greater than AREA\n");
	}
}
