#include<stdio.h>

int main()
{
   int n,h,a[1000],w=0,i;
  
   scanf("%d %d",&n,&h);

   for(i=1;i<=n;i++)
        {
              scanf("%d",&a[i]);
        }
  
   for(i=1;i<=n;i++)
     {
          if(a[i]>h)
           {
            w=w+2;
           }
          
          else
           w=w+1;
    }  


         printf("%d",w);
 return 0;
}
