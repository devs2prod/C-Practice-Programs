// Program to calculate the sum of first 10 even number
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,sum=0;
    for (i=1;i<=10;i++)
    {
        sum+=(2*i);
    }
    printf("Sum of first 10 even number is %d ",sum);
}