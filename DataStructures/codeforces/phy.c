#include<stdio.h>

int main()
{
    int n,x[101],y[101],z[101],i,sum1=0,sum2=0,sum3=0;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
        {
           scanf("%d %d %d",&x[i],&y[i],&z[i]);
        }
    
       for(i=1;i<=n;i++)
         {
            sum1=sum1+x[i];
             sum2=sum2+y[i];
             sum3=sum3+z[i];
         }

       if(sum1==0 && sum2==0 && sum3==0)
           {
             printf("YES");
            }
          else
          printf("NO");





 return 0;
}
