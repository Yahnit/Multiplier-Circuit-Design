#include<stdio.h>

int main()
{
    long long int n,i,j,d,x1,x2;
    scanf("%lld",&n);

    for(i=2;i<(n-1);i++)
        {
           d=n-i;
           x1=0;
           x2=0;
          for(j=1;j<=i;j++)
            {
               if(i%j==0)
               x1++;
           }
          for(j=1;j<=d;j++)
            {
              if(d%j==0)
              x2++;
            }     
                 
          if(x1!=2 && x2!=2)
             {
              printf("%lld %lld",i,d);
               break;
             }
         }  





 return 0;
}
