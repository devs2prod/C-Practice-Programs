/* Program to print pattern
*
*   *
*   *   *
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    printf(" Desired pattern is \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            printf("* \t");
        }
        printf("\n");
    }
} 