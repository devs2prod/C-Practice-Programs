void card()
{
int pin,option,am,g,f;
printf("Enter your PIN \n");
scanf("%d",&pin);
if (pin==6720)
{
	printf("SELECT AN OPTION\n1. WITHDRAW\t\t\t2. BALANCE\n");
	scanf("%d",&option);
	if(option==1)
	{
		printf("Enter your amount  ");
		scanf("%d",&am);
		printf("1. Enter \t\t 2. Cancel\n");
		scanf("%d",&f);
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
	printf(" PIN is incorrect\nPLEASE Enter your PIN\n");
	card();
}
}
