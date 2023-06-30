// Program for ATM machine
#include<stdio.h>
#include"card.c"
#include"amount.c"
void amount();
void card();
void main()
{
int lang,pin,option,am,g,f,e;
printf("Insert your card   \n");
scanf("%d",&e);
printf("Select your language \n1. English\n2. Hindi\n");
scanf("%d",&lang);
printf("Enter your PIN \n");
scanf("%d",&pin);
if (pin==6720)
{
	printf("SELECT AN OPTION\n1. WITHDRAW\t\t\t2. BALANCE\n");
	scanf("%d",&option)9i
	if(option==1)
	{
		printf("Enter your amount  ");
		scanf("%d",&am);
		printf("1. Enter \t\t 2. Cancel\n");
		scanf("%d",&f);
		if(am>10000)
		{
			printf("Re-enter your amount");
			amount();
		}
		printf("Your current balance is 34,376");
		scanf("%d",&g);
	}
	else
	{
		printf("Your current balance is 34,376");
		scanf("%d",&g);
	}
}
else
{
	printf("PIN is incorrect\nPLEASE Enter your PIN\n");
	card();
}
}
