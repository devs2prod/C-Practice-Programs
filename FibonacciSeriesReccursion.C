//Program to generate fibonacci number
void main()
{
	int n;
	int fib(int);
	clrscr();
	printf("Enter digit number\n");
	scanf("%d",&n);
	printf("\n%dth of Fibonacci series is %d\n",n,fib(n));
	getch();
}

int fib(int n){
	if(n==1||n==2)
		return(1);
	else
		return(fib(n-1)+fib(n-2));
}