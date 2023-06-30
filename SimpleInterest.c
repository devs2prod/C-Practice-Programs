//Program to calculate Simple Interest
#include<stdio.h>
void main()
{
int p,t;
float R,SI;
printf("Enter the Principal amount ");
scanf("%d",&p);
printf("Enter the Rate ");
scanf("%f",&R);
printf("Enter the Time ");
scanf("%d",&t);
SI=p*(1+R*t/100);
printf("Simple Interest = %f\n",SI);
}
