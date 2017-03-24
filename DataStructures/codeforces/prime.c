/*print prime numbers upto n*/
#include<stdio.h>

int main()

{
     int n,i,j,nof;

    printf("Enter any number:");
    scanf("%d",&n);

   for(i=1;i<=n;i++)
      { 
         nof=0;
         for(j=1;j<=i;j++)
           {
             
             if(i%j==0)
              {
               nof++;
              }
           }
    
          if(nof==2)
            {
             printf("%d\t",i);
            }
       }     
       printf("\n\n\n");  
     
  return 0;
}
