#include<stdio.h>

long long int a[10000][10000];
int main()
{
      long long int n,x,i,count=0,j;

       scanf("%lld %lld",&n,&x);
       
      for(i=1;i<=n;i++)
          {
               for(j=1;j<=n;j++)
                   {
                      a[i][j]=i*j;
                    }
          }

    for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
                {
                      if(a[i][j]==x)
                       count++;
               }
         }

     printf("%lld",count);



 return 0;
}
