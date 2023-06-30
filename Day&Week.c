//Program to show day of week according to user input
#include<stdio.h>
void main()
{
char choice,m,t,th,f,sat,w,s;
printf("Enter your choice\n1. 'm' \n2. 't' \n3. 'w' \n4. 'th' \n5. 'f' \n6. 'sat' \n7. 's'  \n");
scanf("%c",&choice);
switch(choice)
	{
	case 'm':
	printf("Monday \n");
	break;
	case 't':
	printf("Tuesday \n");
	break;
	case 'w':
	printf("Wednesday \n");
	break;
	case 'th':
	printf("Thursday \n");
	break;
	case 'f':
	printf("Friday \n");
	break;
	case 'sat':
	printf("Saturday \n");
	break;
	case 's':
	printf("Sunday \n");
	break;
	default:
	printf("Please enter valid choice\n");
	break;
	}
}
