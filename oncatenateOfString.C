//Progarm to make a function to concatenate two string
#include<stdio.h>
#include<conio.h>
void cat(char *,char *);

void main()
{
	char str1[40],str2[20];
	clrscr();
	printf("Enter string-1\n");
	gets(str1);
	printf("Enter struing-2\n");
	gets(str2);
	cat(str1,str2);
	printf("After concatenate string is %s\n",str1);
	getch();
}

void cat(char *st1,char *st2)
{
	int i,j;
	for(i=0;*(st1+i)!='\0';i++);
	for(j=0;*(st2+j)!='\0';j++)
	{
		*(st1+i+j)=*(st2+j);
	}
	*(st1+i+j)='\0';
}