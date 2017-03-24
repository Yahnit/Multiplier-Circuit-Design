#include<stdio.h>

int main()
{
   long long int i1,r1,i2,r2,k,x=0,j;

   scanf("%lld %lld %lld %lld %lld",i1,r1,i2,r2,k);
  
  if((i1<r2 && r1<i2) || (i1>r2 && r1>i2))
       {
          printf("0");
       }

    else
        {
            if(k>=i2 && k<=r1 || k>=i1 && k<=r2)
                {
                    if((r2-i1)>=0)
                      {
                         printf("%lld",r2-i1-1);
                      }
                    else
                     {
                        printf("%lld",r1-i2-1);
                     }
                 }
 
             else
                    {
                         if((r2-i1)>=0)
                      {
                         printf("%lld",r2-i1);
                      }
                    else
                     {
                        printf("%lld",r1-i2);
                     }
                 }
            }
return 0;
}



