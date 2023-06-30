//program to find the factorial of any given number
#include<stdio.h>
#include<conio.h>
int main()
{
int x,i,p=1;
clrscr();
printf("Enter any number\n");
scanf("%d",&x);
for(i=1;i<=x;i++)
{
p=p*i;
}
printf("Factorial of %d is %d",x,p);
getch();
}
