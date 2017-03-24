#include<stdio.h>

int main()
{
   int n,k,a[2001],i,count;

  scanf("%d %d",&n,&k);
  
  for(i=1;i<=n;i++)
    {
          scanf("%d",&a[i]);
    }

    for(i=1;i<=n;i++)
       {
           if(5-a[i]>=k)
           count++;
       }

      printf("%d",count/3);



 return 0;
}
