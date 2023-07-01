//Program to a structure to hold the data for a mailing list . Write a function print out the data .
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void print(int);
typedef struct mail{
    char name[20];
    char email[30];
} mail;
mail *ptr;

int main()
{
    int n,i;
    printf("Enter the number of mail ID\n");
    scanf("%d",&n);
    ptr=(mail*)calloc(n,sizeof(mail));
    for(i=0;i<n;i++){
        printf("Person-%d\n\tEnter the name of person = ",i+1);
        //scanf("%s",(ptr+i)->name);
        fflush(stdin);
        gets((ptr+i)->name);
        printf("\tEnter the E-mail id of person = ");
        fflush(stdin);
        gets((ptr+i)->email);
        //scanf("%s",(ptr+i)->email);
    }
    print(n);
    return(0);
}

void print(int p){
    int j;
    for(j=0;j<p;j++){
        printf("\nPerson-%d\n\tName = %s\n\tE-mail id = %s\n",j+1,(ptr+j)->name,(ptr+j)->email);
    }
}