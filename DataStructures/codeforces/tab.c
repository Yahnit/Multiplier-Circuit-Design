#include<stdio.h>

int main()
{
      long long int n,i,j,a[11][11],big=0;

       scanf("%lld",&n);
    
      
       for(i=1;i<=n;i++)
          {
             a[i][1]=1;
           }
        for(j=1;j<=n;j++)
            {
                a[1][j]=1;
            }  


        for(i=2;i<=n;i++)
            {
               for(j=2;j<=n;j++)
                  {
                      a[i][j]=a[i-1][j]+a[i][j-1];
                  }
             } 

           big=a[1][1];

           for(i=1;i<=n;i++)
               {
                 for(j=1;j<=n;j++)
                    {
                       if(big<=a[i][j])
                          {
                              big=a[i][j];
                          }
                     }
                }


            printf("%lld",big);



             


 return 0;
}
