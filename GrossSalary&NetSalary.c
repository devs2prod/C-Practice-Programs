//program to calculate gross salary and net salary
#include<stdio.h>
void main()
{
int basic,da=500;
float gs,ta,ns,pf;
printf("Enter the basic salary ");
scanf("%d",&basic);
ta=0.1*basic;
printf("The value of Travel Allowance is %f\n",ta);
pf=0.78*basic;
printf("The value of Provident Fund is %f\n",pf);
printf("The value of Dearness Allowance is %d\n",da);
gs=basic+da+ta; 
ns=gs-pf;
printf("The value of gross salary is %f\n",gs);
printf("The value of net salary is %f\n",ns);
}
