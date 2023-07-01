//Program to find the smallest number of array
void main()
{
	int arr[20],n,small,pos,i,j;
	clrscr();
	printf("Enter the number of element in Array\n");
	scanf("%d",&n);
	printf("\nEnter the numbers\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	small=arr[0];
	for(j=1;j<n;j++){
		if(small>arr[i])
			small=arr[i];
	}
	printf("Smallest number in Array is %d",small);
	getch();
}