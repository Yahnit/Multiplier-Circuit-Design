#include<stdio.h>

int main()

{
  int ret,marks,rollnum,maxmarks,maxrollnum;
  FILE * fmarks = fopen("marks.csv","r");
 
  ret= fscanf(fmarks,"%d,%d",&rollnum,&marks);
  maxmarks=marks;
  maxrollnum=rollnum;

  while(ret!=EOF)
   {
     ret= fscanf(fmarks,"%d,%d",&rollnum,&marks);
     
    if(marks>maxmarks)
      {
         maxmarks=marks;
         maxrollnum=rollnum;
      }    
  }
    fclose(fmarks);
    printf("The Topper is %d with %d marks.....\n",maxrollnum,maxmarks);




  
  



 return 0;
}
