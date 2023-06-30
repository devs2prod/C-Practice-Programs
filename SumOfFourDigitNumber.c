#include<stdio.h>
void main()
{
int a,b,c,d;
printf("Enter the value of four digit ");
scanf("%d",&a);
b=a%10;
c=a/1000;
d=b+c;
if(a>9999||a<999)
{
printf(" Plesae Enter the value of four digit \n");
}
else
{
printf(" The sum of first and last digit is %d\n",d);
}
}
