#include<stdio.h>

long long int a[1000000],b[1000000],c[1000000];


int main()
{
       long long int n,i,j,temp;

       scanf("%lld",&n);
   
      for(i=1;i<=n;i++)
          {
              scanf("%lld",&a[i]);
          }
       for(i=1;i<n;i++)
          {
                scanf("%lld",&b[i]);
          }
      for(i=1;i<n-1;i++)
          {
                scanf("%lld",&c[i]);
          }

          for(i=1;i<=n;i++)
             {
                  for(j=i+1;j<=n;j++)
                       {
                          if(a[i]>a[j])
                               {
                                    temp=a[i];
                                    a[i]=a[j];
                                    a[j]=temp;   
                                }
                       }
              }

        for(i=1;i<n;i++)
             {
                  for(j=i+1;j<n;j++)
                       {
                          if(b[i]>b[j])
                               {
                                    temp=b[i];
                                    b[i]=b[j];
                                    b[j]=temp;
                                }
                       }
              }


       for(i=1;i<n-1;i++)
             {
                  for(j=i+1;j<n-1;j++)
                       {
                          if(c[i]>c[j])
                               {
                                    temp=c[i];
                                    c[i]=c[j];
                                    c[j]=temp;
                                }
                       }
              }

         b[n]=0;
         c[n]=0;
        c[n-1]=0;
         for(i=1;i<=n;i++)
           {
                if(a[i]!=b[i])
                     {
                          printf("%lld ",a[i]);
                          break;
                     }
           }

           for(i=1;i<=n-1;i++)
              {
                     if(b[i]!=c[i])
                          {
                              printf("%lld",b[i]);
                              break;
                           }
               }




            







 return 0;
}
