//progarm to design a structure to store time and date. function to calculate a difference in 2 times in minutes.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void diff(int);
void print(int);
struct time_date{
    char name[20];
    int hr;
    int min;
    int sec;
    int day;
    int mon;
    int year;
};
struct time_date *ptr;

void main()
{
    int p,i;
    printf("Enter the number of place you want to enter\n");
    scanf("%d",&p);
    ptr=(struct time_date*)calloc(p,sizeof(struct time_date));
    for(i=0;i<p;i++){
	printf("\nEnter Place-%d Detail\n\tEnter NAME = ",i+1);
	fflush(stdin);
	gets((ptr+i)->name);
	do{
	    printf("\tEnter TIME separate with ':' = ");
	    fflush(stdin);
	    scanf("%d:%d:%d",&(ptr+i)->hr,&(ptr+i)->min,&(ptr+i)->sec);
	    if((ptr+i)->hr>24||(ptr+i)->min>60||(ptr+i)->sec>60){
		printf("Please Enter again\n");
	    }
	    else{
		break;
	    }
	}while(1);
	do{
		printf("\tEnter DATE separate with '/' = ");
		fflush(stdin);
		scanf("%d/%d/%d",&(ptr+i)->day,&(ptr+i)->mon,&(ptr+i)->year);
		if((ptr+i)->day>31||(ptr+i)->mon>12){
			printf("Please Enter again\n");
		}
		else{
			break;
		}
	}while(1);
    }
    print(p);
    diff(p);
}

void print(int n){
    int j;
    for(j=0;j<n;j++){
	printf("\n%s's\n\tTIME = %d:%d:%d\n\tDate = %d/%d/%d\n",(ptr+j)->name,(ptr+j)->hr,(ptr+j)->min,(ptr+j)->sec,(ptr+j)->day,(ptr+j)->mon,(ptr+j)->year);
    }
    scanf("%d",&j);
}

void diff(int n){
	int p,q,j;
	printf("Enter Place number in which you want find time difference\n");
	for(j=0;j<n;j++){
		printf("%d. %s\n",j+1,(ptr+j)->name);
	}
	scanf("%d%d",&p,&q);
	j=(((ptr+p-1)->hr*60)+((ptr+p-1)->min*60)+(ptr+p-1)->sec)-(((ptr+q-1)->hr*60)+((ptr+q-1)->min*60)+(ptr+q-1)->sec);
	j=((ptr+p-1)->hr>(ptr+q-1)->hr)?j:(-j);
	printf("Time difference b/w %s and %s is %dmins and %dsecs.\n",(ptr+p-1)->name,(ptr+q-1)->name,j/60,j%60);
}
