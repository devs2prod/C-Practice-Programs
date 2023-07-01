//Program to find L.C.M. of two number 
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,i,r,x,y,sum=1;
    printf("Enter two number \n");
    scanf("%d %d",&a,&b);
    printf("L. C. M. of %d and %d is ",a,b);
    r=a>b?a:b;
    for (i=1;;i++)
    {
        x=i%a;
        y=i%b;
        if (x==0&&y==0)
        {
            printf(" %d ",i);
            break;
        }
    }
}