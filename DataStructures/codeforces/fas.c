#include<stdio.h>

int main()
{
   int n,a[1001],i,x=0;
  
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      {
         scanf("%d",&a[i]);
       }

    if(n==1) 
       {
           if(a[1]==1)
            x=1;
           else
           x=0;
       }




     else
        {
          for(i=1;i<=n;i++)
            {
              if(a[i]==0)
               x++;
             }
         }            

     if(x==1)
        {
            printf("YES");
        }
      else
         {
            printf("NO");
         }
        






      








      
        

  


 return 0;
}
