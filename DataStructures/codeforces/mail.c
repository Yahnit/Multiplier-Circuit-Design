#include<stdio.h>

int main()
{
     long long int n,i,j,a[100001],min[100001],max[100001],b[100001];
     scanf("%lld",&n);

    for(i=1;i<=n;i++)
        {
           scanf("%lld",&a[i]);
        }



    printf("%lld %lld",a[2]-a[1],a[n]-a[1]);
   printf("\n");


      for(i=2;i<n;i++)
         {
             if(a[i]-a[i-1]<=a[i+1]-a[i])
                 printf("%lld ",a[i]-a[i-1]);
              else
                 printf("%lld ",a[i+1]-a[i]);  
           
             if(a[i]-a[1]>=a[n]-a[i])
                printf("%lld",a[i]-a[1]);
             else
               printf("%lld",a[n]-a[i]);
             printf("\n");
       }

    printf("%lld %lld",a[n]-a[n-1],a[n]-a[1]);
     printf("\n"); 



 return 0;
}
