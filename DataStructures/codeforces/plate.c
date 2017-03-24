#include<stdio.h>

int main()
{
       int n,m,k,i,count=0,a[1000];
      scanf("%d%d%d",&n,&m,&k);

      for(i=1;i<=n;i++)
         {
             scanf("%d",&a[i]);
             if(a[i]==1 && m==0)
                 count++;
             else if(a[i]==2 && m==0 && k==0)
                 count++;
            else  if(a[i]==1)
              m--;
              else if(a[i]==2)
                {
                    if(m<=k)
                     k--;
                    else
                     m--;
                }
         }

         printf("%d",count);

 return 0;
}
