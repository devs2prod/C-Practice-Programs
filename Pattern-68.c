/* Program to print pattern on screen 
A
AB
ABC
ABCD
ABCDE
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    printf("Desired pattern is \n");
    for ( i = 65; i <= 69; i++)
    {
        for ( j = 65; j <= i; j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}
