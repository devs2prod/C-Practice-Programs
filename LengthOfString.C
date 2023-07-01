//Program to calculate the length of string
#include<stdio.h>
#include<conio.h>
void main()
{
	char name[20];
	int i;
	clrscr();
	printf("Enter the string\n");
	gets(name);
	for(i=1;name[i]!='\0';i++);
	printf("Length of string is %d",i);
	getch();
}