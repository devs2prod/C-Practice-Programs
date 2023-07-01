// Program to perform all operation of array
#include<stdio.h>
#include<stdlib.h>
void opt();
void insert();
//void delete(int *);
void traverse();
//void merge(int *);
int *ptr;
static int num=0;

void main()
{
	int i;
	printf("Enter the number of element in ARRAY\n");
	scanf("%d",&num);
	ptr=(int)calloc(num+1,sizeof(int));
	printf("\nEnter element of Array\n");
	for(i=0;i<num;i++)
		scanf("%d",ptr+i);
	opt();
}

void opt(){
	int opt;
	printf("//************** ARRAY OPERATION **************//\n\n");
	printf("1.Insertion\n2.Deletion\n3.Traversing\n4.Merging\n5.End\n");
	scanf("%d",&opt);
	switch(opt){
		case 1:
			insert();
			break;
		case 2:
			//delete(&arr);
			break;
		case 3:
			traverse();
			break;
		case 4:
			//merge(&arr);
			break;
		case 5:
			printf("\t\t\tTHANK YOU\n");
			break;
		default:
			printf("Invalid option\n");
			break;
	}
}

void insert(){
	int i,n,pos;
	printf("Enter new element\n");
	scanf("%d",n);
	printf("Enter the position of new element in ARRAY\n");
	do{
		scanf("%d",&pos);
		if(pos>num)
			printf("Invalid position,Please enter again...\n");
	}while(pos>num);
	for(i=num;i>pos-1;i--){
		*(ptr+i)=*(ptr);
	}
	*(ptr+pos-1)=n;
	num;
	opt();
}

void traverse(){
	int i;
	printf("Elements of array are\n");
	for(i=0;i<num+1;i++){
		printf("%d\n",*(ptr+i));
	}
	opt();
}