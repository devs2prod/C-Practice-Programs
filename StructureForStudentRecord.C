//Program to create an structure for student record
#include<stdio.h>
#include<conio.h>
typedef struct student{
	int rollno;
	char name[20];
	char course[20];
	int per;
	char grade;
} stud;
void main()
{
	stud st[5];
	int i,j,p;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\nEnter Student Record -%d\n",i+1);
		fflush(stdin);
		printf("\nEnter Student Roll no\n");
		scanf("%d",&st[i].rollno);
		fflush(stdin);
		printf("\nEnter Student Name\n");
		scanf("%s",&st[i].name);
		fflush(stdin);
		printf("\nEnter Student Course\n");
		scanf("%s",&st[i].course);
		fflush(stdin);
		printf("\nEnter Student Percentage\n");
		scanf("%d",&st[i].per);
		fflush(stdin);
		printf("\nEnter Stundent Grade\n");
		scanf("%c",&st[i].grade);
	}
	clrscr();
	printf("Roll No\tName\tCourse\tPercertage\tGrade\n");
	for(p=0;p<80;p++)
	printf("_");
	for(j=0;j<5;j++)
	{
		printf("%d\t%s\t%s\t%d\t%c\n",st[j].rollno,st[j].name,st[j].course,st[j].per,st[j].grade);
	}
	getch();
}