#include<stdio.h>

int main()
{
      long int n,i,j,count=0;

     scanf("%ld",&n);
 
     for(i=1;i<=n;i++)
          {
               for(j=1;j!=i && j<=n;j++)
                    {
                        if((i*i + j*j)<=n)
                         count++;
                    }
         }
     printf("%ld",count);



 return 0;
}
