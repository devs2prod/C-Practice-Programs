int delete1(int idu)
{
int i,p,ct=0;
struct Demo a1[100];
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
       FILE *k;
  k=fopen("data.xls","w+");
  for(i=0;i<=p;i++)
   {
      if(a1[i].id==idu)
       {
          ct=1;
       }else{   
      fprintf(k,"\n %d",a1[i].id);
     fprintf(k,"\t %s",a1[i].nm);
     fprintf(k,"\t %d",a1[i].sal);
   }
 }
   fclose(k);
 return ct;
 }
