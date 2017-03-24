
#include<stdio.h>

long long int a[101][101],big[101],count[101];

int main()
{
      int n,m,i,j,max;

     scanf("%d %d",&n,&m);

   for(i=1;i<=m;i++)
     {
           for(j=1;j<=n;j++)
            {
                scanf("%lld",&a[i][j]);
            }
    }

   for(i=1;i<=m;i++)
       {
          big[i]=1;
            
            for(j=2;j<=n;j++)
               {
                    if(a[i][j]>a[i][big[i]])
                        {
                           big[i]=j;
                        }
               }
       }
     
   for(j=1;j<=n;j++)
       {
           count[j]=0;
         
           for(i=1;i<=m;i++)
 
               {
                   if(big[i]==j)
                   count[j]++;
                        
               }
       }


      max=1;
      for(i=2;i<=n;i++)
           {
                if(count[max]< count[i])
                  {
                     max=i;
                  }
           }
                

  printf("%d",max);

               



 return 0;
}
