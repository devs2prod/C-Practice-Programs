#include<stdio.h>
#include<conio.h>
struct name{
	int aa;
	int bb;
	char g;
	float h;
	char r;

}p;
void main()
{
	clrscr();
	printf("Size of p is %d",sizeof(p));
	printf("Address of aa is %d\n",&p.aa);
	printf("Address of bb is %d\n",&p.bb);
	printf("Address of g is %d\n",&p.g);
	printf("Address of h is %d\n",&p.h);
	printf("Address of r is %d\n",&p.r);
	getch();
}