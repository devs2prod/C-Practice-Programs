//Program to make a function to copy the string
#include<stdio.h>
#include<conio.h>
#include<string.h>
char copy(char *,char *);

void main()
{
	int len;
	char str1[20],str2[20];
	clrscr();
	printf("Enter String-1\n");
	gets(str1);
	printf("Entered string is %s\n",str1);
	copy(str2,str1);
	printf("String-2 is %s\n",str2);
	getch();
}

char copy(char *des,char *sor)
{
	int i;
	for(i=0;*(sor+i)!='\0';i++)
	{
		*(des+i)=*(sor+i);
	}
	*(des+i)='\0';
}
