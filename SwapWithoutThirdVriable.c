//Program to swap without using third variable
#include<stdio.h>
void main()
{
int a,b;
printf("before swapping the value of a is");
scanf("%d",&a);
printf("before swapping the value of b is");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("after swapping the value of a is%d\n",a);
printf("after swapping the value of a is%d\n",b);
}
