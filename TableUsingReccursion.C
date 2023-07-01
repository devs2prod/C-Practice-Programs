//Progarm to print table of given number using recursion
void main()
{
	int n;
	void table(int);
	clrscr();
	printf("Enter any number\n");
	scanf("%d",&n);
	printf("\nTable of %d is\n");
	table(n);
	getch();
}

void table (int n){
	static int i=1;
	if(i==10)
		printf("%d * %d = %d\n",n,i,n*i);
	else{
		printf("%d * %d = %d\n",n,i,n*i);
		i++;
		table(n);
	}
}