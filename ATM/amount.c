void amount()
{
		int am,f,g;
		printf("Enter your amount  ");
		scanf("%d",&am);
		printf("1. Enter \t\t 2. Cancel\n");
		scanf("%d",&f);
		if(am>10000)
		{
			printf("Re-enter your amount");
			card();
		}
		printf("Your current balance is 34,376");
		scanf("%d",&g);
	}
