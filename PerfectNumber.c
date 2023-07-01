// Program to calculate number entered is a perfect Number or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0,i,a;
    printf("Enter any number\n");
    scanf("%d",&n);\
    printf("Factors of %d is ",n);
    for (i=1;i<n;i++)
    {
        a=n%i;
        if (a==0)
        {
            printf("\n%d",i);
            sum+=i;
        }
    }
    if (sum==n)
    {
        printf("\nEntered number is perfect number");
    }
    else
    {
        printf("\nEntered number is not perfect number");
    }
}