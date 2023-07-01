//Program to sort elements of array in descending order
#include<stdio.h>
#include<conio.h>
void main()
{
	int my[20],i,num,j,t,r,s,y,fact;
	clrscr();
	printf("Enter number of elements\n");
	scanf("%d",&num);
	printf("Enter th Elements of array\n");
	for(i=0;i<num;i++)
	scanf("%d",&my[i]);
	printf("\nElements of array before sorting are \n");
	for(j=0;j<num;j++)
	printf("Array[%d]=%d\n",j,my[j]);
	fact=0;
	for(r=0;r<num;r++)
	{
		for(s=num-1;s>=r;s--)
		{
			if(my[s]>my[s-1])
			{
				t=my[s];
				my[s]=my[s-1];
				my[s-1]=t;
				fact=1;
			}
		}
		if(fact==0)
		break;
	}
	printf("\nElements of array after sorting are \n");
	for(y=0;y<num;y++)
	printf("Array[%d]=%d\n",y,my[y]);
	getch();
}






