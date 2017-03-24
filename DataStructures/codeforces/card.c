#include<stdio.h>

int main()
{
       int n,a[101],i,t,sum=0,x,j;

      scanf("%d",&n);
     for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
    t=n/2;
    x=sum/t;

      for(i=1;i<=n;i++)
          {
              for(j=i+1;j<=n;j++)
                 {
                     if(a[i]+a[j]==x)
                   {
                     printf("%d %d\n",i,j);
                     a[i]=0;
                     a[j]=0;
                     break;
                   }
                 }
         }
    

 return 0;
}
