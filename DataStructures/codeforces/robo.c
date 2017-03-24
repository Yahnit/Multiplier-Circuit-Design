#include<stdio.h>

int main()

{
   int n,a[300],i,j;
  
   scanf("%d",&n);

   for(i=1;i<=n;i++)
    {
      scanf("%d",&a[i]);
    }

   for(i=1;i<n;i++)
        {
          if(a[i]==0)
           {
             printf("R");
           }
          else if(a[i]==1)
             {
                 printf("PR");
             }

        else
              {
                  for(j=1;j<a[i];j++)
                     {
                         printf("PRL");
                      }
                  printf("PR");
              }

          }

        if(a[n]==0)
         printf("");
        else if(a[n]==1)
         printf("P");

         else
          {
             for(j=1;j<a[n];j++)
               {
                 printf("PLR");
               }
              printf("P");
          }            



 return 0;
}
