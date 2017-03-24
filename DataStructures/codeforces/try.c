#include <stdio.h>
long long int a[1001][1001],sum[100001];

int main()
{
      long long int n,m,i,j,big;

     scanf("%lld%lld",&n,&m);

   for(i=1;i<=m;i++)
     {
           for(j=1;j<=n;j++)
            {
                scanf("%lld",&a[i][j]);
            }
    }

   for(i=1;i<=n;i++)
       {
             sum[i]=0;
             for(j=1;j<=m;j++)
               {
                   sum[i]=sum[i]+a[j][i];
               }
      }              
    big=1;
    for(i=2;i<=n;i++)
         {
            if(sum[i]>sum[big])
               {
                  big=i;
               }
          }            
    printf("%lld",big);



 return 0;
}
