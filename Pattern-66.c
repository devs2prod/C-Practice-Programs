/* Program to print patern on screen 
5
54
543
5432
54321
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    printf("Desired pattern is \n");
    for ( i = 5; i >=1 ; i--)
    {
        for ( j = 5; j >=i; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}