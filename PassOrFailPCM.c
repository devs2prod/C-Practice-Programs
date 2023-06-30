#include<stdio.h>
void main()
{
int a,b,av,c;
printf("Enter the marks of Physics ");
scanf("%d",&a);
printf("Enter the marks of Chemistry ");
scanf("%d",&b);
printf("Enter the marks of Mathematics ");
scanf("%d",&c);
av=(a+b+c)/3;
if(a>75&&b>75&&c>75&&av>80)
{
printf("PASS\n");
}
else
{
printf("FAIL\n");
}
}
