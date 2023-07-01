#include<stdio.h>
#include"insert.c"
#include"display.c"
#include"update.c"
#include"delete.c"
//#include"serch.c"
void main()
{
  int i,ch,ext,id1,x;
   do{
   printf("\n Press 1 for Insert : ");
   printf("\n Press 2 for Display : ");
   printf("\n Press 3 for Update : ");
   printf("\n Press 4 for Delete : ");
   //printf("\n Press 5 for Search : ");
      printf("\nEnter Your Ch: ");
      scanf("%d",&ch);
      switch(ch)
         {
            case 1:
                      insert();
                      break;
             case 2:
                      display();
                      break;
      case 3: printf("Enter ID for Update :");
 scanf("%d",&id1);
          x=update(id1);
        if(x==1)
        {printf("\n Data is Update\n");}
                  else
               {printf("\n Data Not Found");}
               break;
     case 4:
            printf("Enter ID for Delete :");
                  scanf("%d",&id1);
                  x=delete1(id1);
                  if(x==1)
                  {printf("\n Data is Deleted\n");}
                  else
               {printf("\n Data Not Found");}
               break;
               
         }
         
         printf("\nCont....Press 1: ");
         scanf("%d",&ext);
    }while(ext==1);
  }
  
