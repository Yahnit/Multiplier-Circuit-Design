#include<stdio.h>

int main()
{
    int n,m,k,t,x=0;

   scanf("%d %d",&n,&m);

   if(n%2==0)
       {
           for(k=0;k<=n;k+=2)
            {
                t=(n-k)/2 + k;
                if(t%m==0)
                    {
                      x=1;
                       printf("%d",t);
                       break;
                    }
            }
      }



  else  if(n%2==1)
       {
          n=n-1;
           for(k=0;k<=n;k+=2)
            {
                t=(n-k)/2 + k+1;
                if(t%m==0)
                    {
                       x=1;
                       printf("%d",t);
                       break;
                    }
            }
      
      }

 
if(x==0)
printf("-1");



 return 0;
}
