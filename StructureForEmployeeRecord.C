//Program to store Employee record
#include<stdio.h>
#include<conio.h>
typedef struct employee{
	int id;
	char name[20];
	int salary;
} Emp;
void main()
{
	Emp a[3];
	int i,j;
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("\nEnter record of Employee-%d\n",(i+1));
		printf("Employee ID -");
		scanf("%d",&a[i].id);
		printf("Employee Name -");
		scanf("%s",&a[i].name);
		printf("Employee salary -");
		scanf("%d",&a[i].salary);
	}
	for(j=0;j<3;j++)
	{
		printf("\nEnter record of Employee-%d\n",(j+1));
		printf("\tEmployee ID - %d\n",a[j].id);
		printf("\tEmployee Name - %s\n",a[j].name);
		printf("\tEmployee salary - %d\n",a[j].salary);
	}
	getch();
}





