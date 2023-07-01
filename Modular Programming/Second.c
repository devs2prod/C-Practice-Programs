void get_data1()
{
	struct employee e[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Address \n");
		scanf("%d",&e[i].address);
		printf("salary \n");
		scanf("%d",&e[i].salary);

	}
	for(i=0;i<5;i++)
	{
		printf("Address=%d \n",e[i].address);
		
		printf("salary=%d \n",e[i].salary);
		
	}
}
