#include<stdio.h>

int main()
{
   int t,a[200],i;

  scanf("%d",&t);
  
  for(i=1;i<=t;i++)
    {
        scanf("%d",&a[i]);
    }

   for(i=1;i<=t;i++)
      {
          if((360%(180-a[i]))==0)
            printf("YES");
          else
           printf("NO");
           
           printf("\n");
     }





 return 0;
}
