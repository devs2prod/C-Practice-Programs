//program to calculate gross salary 
#include<stdio.h>
void main()
{
	int bs;
	float ta,da,gs;
	printf("Enter the Basic salary ");
	scanf("%d",&bs);
	if(bs<10000)
	{
			ta=bs/10;
			printf("The Travel Allowance is %f \n",ta);
			da=bs/20;
			printf("The Dearness Allowance is %f \n",da);
			gs=bs+ta+da;
			printf("The Gross salary is %f \n",gs);
	}
        else
	{
			ta=bs*0.12;
			printf("The Travel Allowance is %f \n",ta);
			da=bs*0.06;
			printf("The Dearness Allowance is %f \n",da);
			gs=bs+ta+da;
			printf("The Gross salary is %f \n",gs);
	}
}

