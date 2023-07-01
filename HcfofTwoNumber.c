// Program to H. C. F. of two number 
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,a,x,b,y,r;
    printf("Enter two number \n");
    scanf("%d %d",&a,&b);
    r=a<b?a:b;
    for (i=r;; i--)
    {
        x=a%i;
        y=b%i;
        if (x==0&&y==0)
        {
            printf("H.C.F. of %d and %d is %d ",a,b,i);
            break;
        }
    }
}