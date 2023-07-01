/* Program to print pattern on screen 
1
1   1
1   2   1
1   3   3   1
1   4   6   4   1
*/
#include<stdio.h>
#include<conio.h>
#include<maths.h>
int main()
{
    	int i;
	for(i=0;i<=4;i++){
		printf("%d\n"pow(11,i));
	}
	return 0;
}