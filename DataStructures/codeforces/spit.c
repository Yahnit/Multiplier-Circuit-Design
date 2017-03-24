#include<stdio.h>

int main()
{
     long long  int n,x[101],d[101],i,j,found=0;
 
     scanf("%lld",&n);
 
     for(i=1;i<=n;i++)
         {
            scanf("%lld %lld",&x[i],&d[i]);
          }
        
    for(i=1;i<=n;i++)
         {
           for(j=1;j<=n,j!=i;j++)
               {
                  if(x[i]+d[i]==x[j] && x[j]+d[j]==x[i])
                     {
                       found=1;
                       break;
                      }
               }
           if(found==1)
             break;
         }


 if(found==1)
 printf("YES");
 else
 printf("NO");
   



 return 0;
}
