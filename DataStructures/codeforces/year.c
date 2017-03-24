#include<stdio.h>

int main()

{
      int n,d[4],i,t;
      scanf("%d",&n);

      n=n+1;
      
     while(n<=9012)
       {
          t=n;
         for(i=0;i<4;i++)
           {
              d[i]=t%10;
              t=t/10;
           }

          if(d[0]!=d[1] && d[0]!=d[2] && d[0]!=d[3] && d[1]!=d[2] && d[1]!=d[3] && d[2]!=d[3])
               {
                  printf("%d",n);
                  break;
                }
               else
                    {
                       n++;
                     }
          }           



 return 0;
}
