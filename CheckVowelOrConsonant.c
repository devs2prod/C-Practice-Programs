// program to calculate whether a character is vowel or consonants
#include<stdio.h>
void main()
{
char letter,a,e,i,o,u,A,O,I,U,E;
printf("Enter any alphabet ");
scanf("%c",&letter);
if(letter==a||letter==e||letter==i||letter==o||letter==u||letter==A||letter==E||letter==I||letter==U||letter==O)
        {
                printf("%c is a vowel\n",letter);       
        }
else
        {
                printf("%c is a consonants\n",letter);
        
                }
       
}
