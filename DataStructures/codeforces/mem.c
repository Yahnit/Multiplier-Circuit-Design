#include<stdio.h>

int main()
{
   long long int n,a[100001],i,b[100001];
   scanf("%lld",&n);

   for(i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
     }

     a[n+1]=0;
     for(i=1;i<=n;i++)
       {
          b[i]=a[i]+a[i+1];
       }

     for(i=1;i<=n;i++)
       {
          printf("%lld\t",b[i]);
        }



 return 0;
}
