//Program to reverse of number using recursive
void main()
{
	int n;
	int reverse(int);
	clrscr();
	printf("Enter any number\n");
	scanf("%d",&n);
	printf("Reverse of %d is %d",n,reverse(n));
	getch();
}

int reverse(int n){
	int d;
	static int t=0;
	if(n==0)
		return(t);
	else{
		d=n%10;
		t=t*10+d;
		reverse(n/10);
	}
}