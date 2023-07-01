// Program to find armstrong number between 100 to 1000
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0,i,j,a,b;
    for(n=101;n<154;n++)
    {
        j=n;
        for(i=0;n!=0;i++)
        {
            b=n/10;
            a=n%10;
            sum+=a*a*a;
            n=b;
            if (j==sum)
            printf("%d is armstrong number",j);
        }
    }
}