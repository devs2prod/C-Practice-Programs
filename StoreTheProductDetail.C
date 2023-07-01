//Progarm to store information of six member and print in alphabetic order.
#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct store1{
	int id;
	char name[20];
	int  quant;
	int price;
} store;
void main()
{
	int i,j;
	store a[6];
	clrscr();
	for(i=0;i<6;i++)
	{
		printf("Enter ID\n");
		scanf("%d",&a[i].id);
		fflush(stdin);
		printf("Enter name\n");
		scanf("%s",a[i].name);

		printf("Enter the quantity\n");
		scanf("%d",&a[i].quant);
		printf("Enter the price\n");
		scanf("%d5",&a[i].price);
	}
	getch();
}