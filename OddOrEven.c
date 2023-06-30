//Program to check whether a number is even or odd using switch-case
#include<stdio.h>
int main()
{
	 int num,a;
	 printf("Enter any number \n");
	 scanf("%d",&num);
	 a=num%2;
	 switch(a)
	 {
	 	case 1:
	 	{
	 		 printf("%d is odd number \n",num);
	 		 break;
	 	}
	 	case 0:
	 	{
	 		 printf("%d is even number \n",num);
	 		 break;
	 	}
	 }
}
