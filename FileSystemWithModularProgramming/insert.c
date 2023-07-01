 struct Demo
 {
  char nm[20];
  int id,sal;
  };
  void insert()
  {
   struct Demo a[100];
   int i,ch,p;
   for(i=0; ;i++)
   {
     printf("ID= ");
     scanf("%d",&a[i].id);
     printf("Name= ");
     scanf("%s",a[i].nm);
     printf("Salary= ");
     scanf("%d",&a[i].sal);
            printf("\nCont...Press 1: ");
            scanf("%d",&ch);
         if(ch!=1)
         {
         p=i;
         break;
         }
    } 
  FILE *k;
  k=fopen("data.xls","a+");
  
    
   for(i=0;i<=p;i++)
   {
   fprintf(k,"\n %d",a[i].id);
   fprintf(k,"\t %s",a[i].nm);
   fprintf(k,"\t %d",a[i].sal);
   }
   fclose(k);
   
   
 }  
   
   
