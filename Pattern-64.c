/* Program to print pattern 
*
*   *   *
*   *   *   *   *
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    printf(" Desired pattern is \n ");
    for ( i = 1; i < 6; i++)
    {
        if (i%2==1)
        {
            for (j = 0; j < i; j++)
            {
                printf("*\t");
            }
            printf("\n");
        }
    }
}