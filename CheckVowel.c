//Program to check if entered character is vowel or not.
#include<stdio.h>
void main()
{
	char letter;
	printf("Enter any alphabet \n");
	scanf("%c",&letter);
	switch(letter)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		{
			printf("%c is vowel \n",letter);
			break;
		}
		default:
		{
		printf("%c is not a vowel \n",letter);
		break;
		}
	}
}
