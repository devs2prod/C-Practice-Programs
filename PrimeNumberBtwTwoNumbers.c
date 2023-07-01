//Program to find prime number between two number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int l,b,j,i,a,p,h;
    printf("Enter numbers between you want to find prime number \n");
    scanf("%d %d",&l,&h);
     for (i=l+1;i<h;i++)
    {  
        p=0;
        for (j=1;j<i;j++)
        {
            a=i%j;
            if (a==0&&j!=1)
            p=1;
        }
        if (p==0)
        printf("%d is prime number \n",i);
    }
}