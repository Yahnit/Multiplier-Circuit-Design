#include<stdio.h>

int main()
{
       long long int n,a[100000],i,x=0,y=0,count=0,z=0;
  
       scanf("%lld",&n);
       for(i=1;i<=n;i++)
         {
             scanf("%lld",&a[i]);
         }

     for(i=1;i<=n;i++)
        {
           if(a[i]>0)
             {
               y=y+a[i];
               z++;
             }
          else
            {
               x++;
            }

        if(x>y)
            {
                 x=0;
            }

         if(x>0 && y>=x)
             {
                 count++;
                 y--;
                 x=0;
            }

         }

     printf("%lld",n-count-z);















   





 return 0;
}
