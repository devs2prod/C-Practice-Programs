/*
Program to create a struct person field name, age, contect number and Address where Address is a structure type with
fields (House number, city, state) in it.store the data of different person.
*/
#include<stdio.h>
#include<stdlib.h>
struct address_detail{
	int hno;
	char colony[20];
	char city[15];
	char state[20];
};

typedef struct person{
    char name[20];
    int age;
    long int con;
    struct address_detail add;
} person;

int main()
{
    person *ptr;
    int p,i,j;
    printf("Enter the number of Person's data is ");
    scanf("%d",&p);
    ptr=(person*)calloc(p,sizeof(person));
    for(i=0;i<p;i++){
	printf("\nEnter the Person%d name = ",i+1);
	scanf("%s",(ptr+i)->name);
	printf("Enter the Person%d Age = ",i+1);
	fflush(stdin);
	scanf("%d",&(ptr+i)->age);
	printf("Enter the Person%d Contact Number = ",i+1);
	fflush(stdin);
	scanf("%ld",&(ptr+i)->con);
	printf("Enter the Person%d Address Detail's\n",i+1);
	fflush(stdin);
	printf("House Number = ");
	fflush(stdin);
	scanf("%d",&(ptr+i)->add.hno);
	fflush(stdin);
	printf("Colony = ");
	fflush(stdin);
	scanf("%s",(ptr+i)->add.colony);
	printf("City = ");
	fflush(stdin);
	scanf("%s",(ptr+i)->add.city);
	fflush(stdin);
	printf("State = ");
	fflush(stdin);
	scanf("%s",(ptr+i)->add.state);
    }
    for(j=0;j<p;j++){
	printf("\nPerson-%d\n",j+1);
	printf("\tName = %s\n",(ptr+j)->name);
	printf("\tAge = %d\n",(ptr+j)->age);
	printf("\tContact Number = %ld\n",(ptr+j)->con);
	printf("\tAddress \n");
	printf("\t\tHouse Number = %d\n",(ptr+j)->add.hno);
	printf("\t\tColony = %s\n",(ptr+j)->add.colony);
	printf("\t\tCity = %s\n",(ptr+j)->add.city);
	printf("\t\tState = %s\n",(ptr+j)->add.state);
    }
    return(0);
}