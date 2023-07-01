/* Progarm to print pattern 
123
456
789
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    printf("Desired pattern is \n");
    for ( i = 1; i < 10; i++)
    {
        printf("%d",i);
        if (i%3==0)
        {
           printf("\n");
        }
    }
}