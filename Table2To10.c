//program to print table from 2 to 10
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    printf("Table from 2 to 10 are \n");
    for (i=2;i<=10;i++)
    {
        for ( j=1;j<=10;j++)
        {
            printf("%d * %d = %d \n",i,j,i*j);
        }
        printf("\n\n");
    }
}