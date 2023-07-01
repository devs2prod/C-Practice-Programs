/*Program to print pattern on screen 
*
*   *
*   *   *
*   *   *
*   *
*
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,p,q;
    printf("Desired pattern is \n");
    for ( i = 1; i <= 3; i++)
    {
        for ( j = 0; j < i; j++)
        {
            printf(" *\t");
        }
        printf("\n");
    }
    for ( p = 3; p >= 1; p--)
    {
        for ( q = 1; q <= p; q++)
        {
            printf(" *\t");
        }
        printf("\n");
    }
    getch();
}