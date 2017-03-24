#include<stdio.h>

int main()
{
       int n,a[101],big,small,i,j,ans;
       scanf("%d",&n);

      for(i=1;i<=n;i++)
         {
             scanf("%d",&a[i]);
         }

       small=1;
       big=1;
       for(i=2;i<=n;i++)
          {
              if(a[i]>a[big])
                  {
                      big=i;
                   }         

             if(a[i]<=a[small])
               {
                   small=i;
               }
         }

      if(big<small)
       {
           ans=n+big-small-1;
       }

       else
         {
              ans=n+big-small-2;
         }

     printf("%d",ans);
   








 return 0;
}
