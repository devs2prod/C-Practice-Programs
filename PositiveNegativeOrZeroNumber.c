/*program that accepts a number from user and calculate whether it is positive or negative or zero*/
#include<stdio.h>
void main()
{
int a;
printf("Enter any number  ");
scanf("%d",&a);
        if(a>=0)
        {
                if(a==0)
                {
                printf("Entered number is zero  \n");
                }
                else
                {
                printf("Entered number is positve \n");
                }
        }
        else
        {
        printf("Entered number is negative \n");
        }
}
