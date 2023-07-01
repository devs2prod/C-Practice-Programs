//Program to calculate number is prime or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,a,p;
    printf("Enter any number \n");
    scanf("%d",&n);
    p=0;
    for (i=1;i<n; i++)
    {
        a=n%i;
        if (a==0&&i!=1)
        p=1;
    }
    if (p==0)
    printf("%d is prime number ",n);
    else
    printf("%d is not prime number ",n);
    return 1;
}