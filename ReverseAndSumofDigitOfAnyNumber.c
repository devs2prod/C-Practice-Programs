/*program that accepts a three digit number from user and obtain reverse of the number
and then calculate sum of all the digits*/
#include<stdio.h>
void main()
{
int a,b,c,d,e,f,g,sum;
printf("Enter the three digit number ");
scanf("%d",&a);
if(a<999&&a>99)
        {
	        b=a%10;
	        e=a/10;
	        c=e%10;
	        f=e/10;
	        d=f%10;
	        g=f/10;
	        printf("The reverse of three digit number is %d%d%d \n",b,c,d);
                sum=d+b+c;
                printf("The sum of three digit number is %d \n",sum);
        }
else
        {
                printf("Enter the three digit number ");
        }
}
