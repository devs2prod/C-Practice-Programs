//program to calculate number of vowels, consonats, white space and number in an string
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,l,i,white=0,num=0,vol=0,con=0;
	char str[20];
	clrscr();
	printf("Enter string\n");
	gets(str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]==' ')
		{
			++white;
		}
		a=str[i];
		if((a>64&&a<92)||(a>96&&a<124))
		{
			if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
			++vol;
			else
			++con;
		}
		if(a>47&&a<58)
		{
			++num;
		}
	}
	printf("\nString contain\n\tVowels = %d\n\tConsonant = %d\n\tWhite Space = %d\n\tNumber = %d",vol,con,white,num);
	getch();
}