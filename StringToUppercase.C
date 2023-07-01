//Program to convert string into uppercase
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[20];
	int i,a,l;
	clrscr();
	printf("Enter string\n");
	gets(str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		a=str[i];
		if(a>96&&a<123)
		{
			a=a-32;
			str[i]=a;
		}
	}
	printf("string in Uppercase is %s\n",str);
	getch();
}
