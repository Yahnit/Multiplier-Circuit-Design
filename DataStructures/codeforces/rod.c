#include<stdio.h>
int main()
{
     long long  int n,t,i=1,ans=1;

      scanf("%lld %lld",&n,&t);

     for(i=1;i<=n-1;i++)
        {
            ans=ans*10;
        }
 
      if(n==1 && t==10)
       printf("-1");
  
     else
     {
       for(i=ans;i>0;i++)
          {
             if(i%t==0)
                 {
                  printf("%lld",i);
                    break;
                 }  
          }

      }

 return 0;
}

