#include<stdio.h>

int main()
{
      long long int a,i,fact=1;
       scanf("%lld",&a);

      for(i=1;i<=a;i++)
       {
         fact=fact*2;
       }
 
      printf("%lld",fact);
 return 0;
}
