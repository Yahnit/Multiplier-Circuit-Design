#include<stdio.h>

int main()
{
      long long int n,rev=0,num=0,d;
      scanf("%lld",&n);


    if(n%10!=9 || n%10!=0)
     {
       while(n>0)
       {
          if(n==9)
           {
             d=n;
           }
        else
          {
          d=n%10;
            
          if(d>(9-d))
           {
             d=(9-d);
           }
          }
          rev=rev*10+d;
          n=n/10;
       }
     
       while(rev>0)
          {
             d=rev%10;
             num=num*10+d;
              rev=rev/10;
          }
     }       
      else
        {
           d=n%10;
           if(d>(9-d))
           {
             d=(9-d);
           }
         



      printf("%lld",num);


 return 0;
}
