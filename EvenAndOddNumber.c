// Progarm to accept n number from user and show how many numbers are even or odd.
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,x=0,y=0,a;
    printf("Enter n number ");
    scanf("%d",&n);
    for (i = 1;i<=n;i++)
    {
      scanf("%d",&a);
        if (a%2==0)
        ++x;
        else
        ++y;
    }
    printf("number of even entered number is %d \n",x);
    printf("number of odd entered number is %d \n",y);

}