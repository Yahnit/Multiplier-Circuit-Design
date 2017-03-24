#include<stdio.h>

int main()
{
      long long int n,m,count=0,i;
      scanf("%lld%lld",&n,&m);

    if(m<=1 && n<=1)
    count=0;
  else
{

    if(n<m)
      {
        while(m>0 && n>0)
            {
                 if(m-2>=0 && n-1>=0)
                    {
                       count++;
                       m=m-2;
                       n=n-1;
                    }

                 else if(m-1>=0 && n-2>=0)
                   {
                      count++;
                      m=m-1;
                      n=n-2;
                    }
              }
       }


   else  if(n>=m)
      {
        while(m>0 && n>0)
            {
                 if(n-2>=0 && m-1>=0)
                    {
                       count++;
                       n=n-2;
                       m=m-1;
                    }

                 else if(n-1>=0 && m-2>=0)
                   {
                      count++;
                      n=n-1;
                      m=m-2;
                    }
              }
       }

 }

printf("%lld",count);









 return 0;
}
