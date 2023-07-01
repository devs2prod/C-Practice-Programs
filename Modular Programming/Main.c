#include<stdio.h>
#include"First.c"
#include"Second.c"
void main()
{
		char choice,g,h;
		
		printf("Enter your choice \n");
		printf("get_data function call for g\n");
		printf("get_data1 function call for h\n");
		scanf("%c",&choice);
		switch(choice)
		{
			case 'g': 
			get_data();
			break;
			case 'h': 
			get_data1();
			break; 
		}
}
