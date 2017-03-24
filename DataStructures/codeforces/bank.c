#include<stdio.h>

int main()
{
     long long int n,x,y;
    scanf("%lld",&n);

    if(n>=0)
    printf("%lld",n);
   
   else
      {
         n=-n;
         x=n%10;
         n=n/10;
         y=n%10;
        
           if(x<y)
               {
                 n=n/10;
                 n=-1*(n*10+x);
                 printf("%lld",n);
               }

             else  {
                 n=n/10;
                 n=-1*(n*10+y);
                 printf("%lld",n);
               }

       }




 return 0;
}
