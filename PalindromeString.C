//Program to check entered string is palindrome or not
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int l,i,f=0;
	char str[20];
	clrscr();
	printf("Enter any string\n");
	gets(str);
	l=strlen(str);
	for(i=0;i<l/2;i++)
	{
		if(str[i]==str[l-1-i])
		{
		++f;
		}
	}
	if(f==l/2)
	printf("\nEntered string is Palindrome\n");
	else
	printf("\nEntered string is not Palindrome\n");
	getch();
}
