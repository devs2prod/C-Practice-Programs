/*program that accepts marks of five subjects 
from user and calculate the total marks and
then calculate the percentage out of 500*/
#include<stdio.h>
void main()
{
int a,b,c,d,e,sum,percent;
printf("Enter the marks of English ");
scanf("%d",&a);
printf("Enter the marks of Physics ");
scanf("%d",&b);
printf("Enter the marks of Chemistry ");
scanf("%d",&c);
printf("Enter the marks of Mathematics ");
scanf("%d",&d);
printf("Enter the marks of Computer Science ");
scanf("%d",&e);
sum=a+b+c+d+e;
printf("-------------------------------------------------\n");
printf("|                    CLASS 12                   |\n");
printf("-------------------------------------------------\n");
printf("|       Subject         |       Marks           |\n");
printf("-------------------------------------------------\n");
printf("|       English         |       %d              |\n",a);
printf("|       Physics         |       %d              |\n",b);
printf("|       Chemistry       |       %d              |\n",c);
printf("|       Mathematics     |       %d              |\n",d);
printf("|       Computer Sc.    |       %d              |\n",e);
printf("-------------------------------------------------\n");
printf("|       TOTAL           |       %d/500         |\n",sum);
printf("-------------------------------------------------\n");
if(sum>300)
{
        if(sum>400)
        {
        printf("\t\tGrade: 'A' \n");
        }
        else
        {
        printf("\t\tGrade: 'B' \n");
        }
}
else
{
        printf("\t\tGrade: 'C' \n");
}
}
