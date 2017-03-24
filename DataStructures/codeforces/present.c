#include<stdio.h>

int main()
{
    int n,p[101],i,a[101],j;

    scanf("%d",&n);
  for(i=1;i<=n;i++)
      {
         scanf("%d",&p[i]);
      }
 
   for(i=1;i<=n;i++)
      {
          for(j=1;j<=n;j++)
          {
              if(i==p[j])
                  {
                    printf("%d ",j); 
                   break;
                  }
           }
       }
    




 return 0;
}

