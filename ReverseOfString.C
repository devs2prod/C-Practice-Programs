//Program to create a function to reverse the string passing a string pointer to a function
#include<stdio.h>
#include<conio.h>
void reverse(char *);
void main()
{
	char str[20];
	clrscr();
	printf("Enter string\n");
	gets(str);
	printf("String before reverse is %s\n",str);
	reverse(str);
	printf("\nString after reverse is %s\n",str);
	getch();
}

void reverse(char *ptr)
{
	int i,j,n;
	char temp;
	for(i=0;*(ptr+i)!='\0';i++);
	for(j=0;j<i/2;j++)
	{
		temp=*(ptr+i-j);
		*(ptr+i-j)=*(ptr+j);
		*(ptr+j)=temp;
	}
	*(ptr+i+1)='\0';
}