#include<stdio.h>
typedef struct store
{
    int id;
    char name[20];
    float quant;
    float price;
} store;

int main()
{
    int i,j;
    store a[6];
    for ( i = 0; i < 6; i++)
    {
        printf("Enter the ID\n");
        scanf("%d",&a[i].id);
        printf("Enter the name\n");
        gets(a[i].name);
        printf("Enter the Quantity\n");
        scanf("%f",&a[i].quant);
        printf("Enter teh price\n");
        scanf("%f",&a[i].price);
    }    
}