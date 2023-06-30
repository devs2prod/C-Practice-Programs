/*program to calculate out how many
currency of Rs2000, Rs500, Rs100, Rs50,
 Rs20, Rs10, Rs5, Rs2, Rs1 required*/
#include<stdio.h>
void main()
{
int a,b,c,d,e,f,g,h;
printf("Enter the amount   ");
scanf("%d",&a);
printf("currency of Rs 2000 is %d\n",a/2000);
b=a%2000;
printf("currency of Rs 500 is %d\n",b/500);
c=b%500;
printf("currency of Rs 100 is %d\n",c/100);
d=c%100;
printf("currency of Rs 50 is %d\n",d/50);
e=d%50;
printf("currency of Rs 10 is %d\n",e/10);
f=e%10;
printf("currency of Rs 5 is %d\n",f/5);
g=f%5;
printf("currency of Rs 2 is %d\n",g/2);
h=g%2;
printf("currency of Rs 1 is %d\n",h/1);
}
