#include<stdio.h>

int main()
{
     long long int n,d,ans=0;
     scanf("%lld",&n);

         while(n>0)
           {
              d=n%10;
              n=n/10;
             ans+=(d+1)*(n+1);
           }              

 

 return 0;
}
