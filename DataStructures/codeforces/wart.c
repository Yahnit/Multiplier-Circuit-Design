#include<stdio.h>
int main()
{
      int n,a[100],i;
     
        scanf("%d",&n);

     for(i=1;i<=n;i++)
       {
           scanf("%d",&a[i]);
       }

      if(n==1)
       printf("-1");

     else
         {
               if(a[n]!=15)
                 {
                      if(a[n]>a[n+1])
                         {
                            printf("UP");
                         }              
                      else
                        printf("DOWN");
                }
                     
               else
               printf("DOWN");
         }
 

 return 0;
}
