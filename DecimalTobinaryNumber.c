// Program to convert decimal number into binary number 
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int num,a,i,b,sum=0,c;
    printf("Enter decimal number \n");
    scanf("%d",&num);
    for(i=0;num!=0;i++)
    {
        a=num%2;
        c=pow(10,i);
        sum=sum+a*c;
        b=num/2;
        num=b;
    }
    printf("%d",sum);
}