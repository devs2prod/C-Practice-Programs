void display()
{
struct Demo a1[100];
int i,p;
FILE *t;
t=fopen("data.xls","r+");
 for(i=0;;i++)
    {
     fscanf(t,"%d",&a1[i].id);
     fscanf(t,"%s",a1[i].nm);
     fscanf(t,"%d",&a1[i].sal);
        if(feof(t)!=0)
          {
          p=i;
          break;
          }  
       }
       fclose(t);
   for(i=0;i<=p;i++)
   {
   printf("\n%d",a1[i].id);
   printf("\t%s",a1[i].nm);
   printf("\t%d",a1[i].sal);
   }
  }
   
