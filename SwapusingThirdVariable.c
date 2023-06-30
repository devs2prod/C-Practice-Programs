//Program to swap using third variable
#include<stdio.h>
void main()
{
int a,b,c;
printf("before swapping enter the value of a is");
scanf("%d",&a);
printf("before swapping enter the value of b is");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("after swapping enter the value of a is%d\n",a);
printf("after swapping enter the value of b is%d\n",b);
}
