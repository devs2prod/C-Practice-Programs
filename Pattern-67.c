/* Program to print pattern on screen 
1
12
123
1234
12345
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    printf("Desired pattern is \n");
    for ( i = 1; i < 6; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
}