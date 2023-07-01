//Program to design a airline repesentation.
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define num 5
void print(int);
typedef struct timing{
	int hr;
	int min;
	int sec;
} time;
typedef struct airline{
	char name[20];
	int fnum;
	char Or_name[20];
	int Or_code;
	char Des_name[20];
	int Des_code;
	time start;
	time arrival;
} airlines;
airlines *ptr;

void main(){
	int i;
	ptr=(airlines*)calloc(num,sizeof(airlines));
	clrscr();
	for(i=0;i<num;i++){
		printf("Enter the airlines detail:-\n\tFight Name = ");
		scanf("%s",(ptr+i)->name);
		printf("\tFight Number = ");
		scanf("%d",&(ptr+i)->fnum);
		printf("\tOriginating Airport Name = ");
		scanf("%s",(ptr+i)->Or_name);
		printf("\tOriginating Airport Code = ");
		scanf("%d",&(ptr+i)->Or_code);
		printf("\tDestination Airport Name  = ");
		scanf("%s",(ptr+i)->Des_name);
		printf("\tDestination Airport Code  = ");
		scanf("%d",&(ptr+i)->Des_code);
		printf("\tEnter the Starting time(Separated by ':') = ");
		scanf("%d:%d:%d",&(ptr+i)->start.hr,&(ptr+i)->start.min,&(ptr+i)->start.sec);
		printf("\tEnter the Arrival time(Separated by ':') = ");
		scanf("%d:%d:%d",&(ptr+i)->arrival.hr,&(ptr+i)->arrival.min,&(ptr+i)->arrival.sec);
	}
	print(num);
	getch();
}

void print(int n){
	int j;
	for(j=0;j<n;j++){
		printf("Airline-%d\n\t",j+1);
		printf("Fight Name = %s\n\tFight Number = %d\n",(ptr+j)->name,(ptr+j)->fnum);
		printf("\tOriginating Airport Name = %s\n\tOriginating Airport Code = %d\n",(ptr+j)->Or_name,(ptr+j)->Or_code);
		printf("\tDestination Airport name =%s\n\tDestination Airport Code = %d\n",(ptr+j)->Des_name,(ptr+j)->Des_code);
		printf("\tStarting time = %d:%d:%d\n\t",(ptr+j)->start.hr,(ptr+j)->start.min,(ptr+j)->start.sec);
		printf("\tArrival time = %d:%d:%d\n\t",(ptr+j)->arrival.hr,(ptr+j)->arrival.min,(ptr+j)->arrival.sec);
	}
}