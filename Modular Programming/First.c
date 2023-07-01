struct employee
{
int id,address,salary;
char name[10];
};
void get_data()
{
	struct employee e[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("ID \n");
		scanf("%d",&e[i].id);
		printf("Name \n");
		scanf("%s",&e[i].name);

	}
	for(i=0;i<5;i++)
	{
		printf("ID=%d \n",e[i].id);
		
		printf("Name=%s \n",e[i].name);
		
	}
}
