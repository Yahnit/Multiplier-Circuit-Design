#include<stdio.h>

int main()
{
   long long int i1,r1,i2,r2,k,x=0,j;

   scanf("%lld %lld %lld %lld %lld",i1,r1,i2,r2,k);

   if(i1<i2)
     {
        for(j=i1;j<=r2+r1;j++)
          {
            if((j>=i1) && (j<=r1) && (j>=i2) && (j<=r2))

              x++;
          }
     }        
  
    else if (i2<=i1)
      {
        for(j=i2;j<=r2+r1;j++)
          {
            if((j>=i1) && (j<=r1) && (j>=i2) && (j<=r2))
              x++;
          }
     }


     printf("%lld",x);


 return 0;
}
