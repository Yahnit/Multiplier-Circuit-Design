#include<stdio.h>

int main()
{
          int n,k,i,a[100],count=0,t,x,d;
           scanf("%d%d",&n,&k);

         for(i=1;i<=n;i++)
           {
               scanf("%d",&a[i]);
               t=a[i];
               x=0;
                while(t>0)
                   {
                       d=t%10;
                      if(d==4 || d==7)
                         x++;
                        t=t/10;
                   } 
                if(x<=k)
                  count++;
          }
          printf("%d",count);


 return 0;
}
