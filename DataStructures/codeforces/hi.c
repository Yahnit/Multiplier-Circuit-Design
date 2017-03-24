

#include<stdio.h>

int main()
{
       long int a[101][101],sum[101];
      int n,m,i,j,big;

     scanf("%d %d",&n,&m);

   for(i=1;i<=m;i++)
     {
           for(j=1;j<=n;j++)
            {
                scanf("%ld",a[i][j]);
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
    printf("%d",big);



 return 0;
