/*program that accepts a three digit number from user and check whether it is palindrome or not*/
#include<stdio.h>
void main()
{
int a,b,e,c;
printf("Enter any number ");
scanf("%d",&a);
b=a%10;
e=a/10;
c=e/10;
if(a>99 && a<1000)
{
        if(b==c)
        {
                printf("Entered number is Palindrome\n");
        }
        else
        {
                printf("Entered number is not Palindrome\n");
        }
}
}
