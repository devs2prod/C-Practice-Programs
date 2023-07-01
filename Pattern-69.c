/* Program to print pattern on screen 
ABCDDCBA
ABCCBA
ABBA
AA
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,p;
    printf("Desired pattern is \n");
    for ( i = 1; i <= 4; i++)
    {
        for ( j = 65; j <= (69-i); j++)
        {
            printf("%c",j);
        }
        for ( p = (69-i); p >=65 ; p--)
        {
            printf("%c",p);
        }
        printf("\n");
    }
}