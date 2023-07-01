//program to calulate LCM and HCF using function without return type and without argument
#include<stdio.h>
void LCM();
void HCF();

void main()
{
	clrscr();
	LCM();
	HCF();
	getch();
}

void LCM()
{
	int p,num1,num2,x,i,a=1;
	printf("Enter any number \n");
	scanf("%d %d",&num1,&num2);
	for(i=1;;i++)
	{
		if(i%num1==0&&i%num2==0)
		{
			printf("the LCM of %d and %d is %d\n",num1,num2,i);
			break;
		}
	}
}

void HCF()
{

	int num1,num2,i;
	printf("Enter any number \n");
	scanf("%d %d",&num1,&num2);
	for(i=1;;i++)
	{
		if(num1%i==0&&num2%i==0)
		{
			printf("the HCF of %d and %d is %d\n",num1,num2,i);
			break;
		}
	}
}














